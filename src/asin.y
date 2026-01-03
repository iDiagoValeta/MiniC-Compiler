/* Fichero asin.y: Análisis sintáctico del lenguaje. */

%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"

void yyerror(const char *s);
extern int yylex(void);
%}

%union{
    int cent;
    char *ident;
    Lista lista;
    Expresion texp;
}

%token INT BOOL K_TRUE K_FALSE RETURN READ PRINT IF ELSE FOR
%token <ident> ID
%token <cent> CTE
%token OP_LOGICO_AND OP_LOGICO_OR
%token OP_IGUALDAD_EQ OP_IGUALDAD_NEQ
%token OP_RELACIONAL_GE OP_RELACIONAL_LE

%type <cent> tipoSimp
%type <lista> listParamForm paramForm listParamAct paramAct
%type <texp> expre expreLogic expreIgual expreRel expreAd expreMul expreUna expreSufi const expreOP
%type <cent> opLogic opIgual opRel opAd opMul opUna
%type <cent> inicio_globales salto_main

%%

programa:
    inicio_globales salto_main listDecla
    {
        if (verTdS) mostrarTdS();
        SIMB sim = obtTdS("main");
        if (sim.t == T_ERROR) yyerror("Falta main");
        completaLans($1, crArgEnt(dvar));
        completaLans($2, crArgEtq(sim.d));
    }
    ;

inicio_globales:
    {
        dvar = 0; niv = 0; cargaContexto(niv);
        $$ = creaLans(si);
        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
    }
    ;

salto_main:
    {
        emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(1));
        $$ = creaLans(si);
        emite(CALL, crArgNul(), crArgNul(), crArgEtq(-1));
        emite(FIN, crArgNul(), crArgNul(), crArgNul());
    }
    ;

listDecla: decla | listDecla decla ;
decla: declaVar | declaFunc ;

declaVar:
    tipoSimp ID ';'
    {
        if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("ID repetido.");
        else dvar += TALLA_TIPO_SIMPLE;
    }
    | tipoSimp ID '=' const ';'
    {
        if ($1 != $4.t) yyerror("Error de tipos.");
        if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("ID repetido.");
        else {
            emite(EASIG, crArgEnt($4.d), crArgNul(), crArgPos(niv, dvar));
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
    | tipoSimp ID '[' CTE ']' ';'
    {
        if ($4 <= 0) yyerror("Dimension no positiva.");
        else {
            int ref = insTdA($1, $4);
            if (!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, ref)) yyerror("ID repetido.");
            else dvar += $4 * TALLA_TIPO_SIMPLE;
        }
    }
    ;

const:
    CTE { $$.t = T_ENTERO; $$.d = $1; }
    | K_TRUE { $$.t = T_LOGICO; $$.d = 1; }
    | K_FALSE { $$.t = T_LOGICO; $$.d = 0; }
    ;

tipoSimp: INT { $$ = T_ENTERO; } | BOOL { $$ = T_LOGICO; } ;

declaFunc:
    tipoSimp ID
    {
        niv = 1; cargaContexto(niv);
        $<cent>$ = si;
    }
    '(' paramForm ')'
    {
        if (!insTdS($2, FUNCION, $1, 0, $<cent>3, $5.ref)) yyerror("ID repetido.");
        $<cent>$ = dvar;
        dvar = 0;
    }
    bloque
    {
        if (verTdS) mostrarTdS();
        descargaContexto(niv);
        niv = 0;
        dvar = $<cent>7;
    }
    ;

paramForm:
    { $$.ref = insTdD(-1, T_VACIO); $$.talla = 0; }
    | listParamForm { $$ = $1; }
    ;

listParamForm:
    tipoSimp ID
    {
        $$.ref = insTdD(-1, $1);
        $$.talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1);
    }
    | tipoSimp ID ',' listParamForm
    {
        $$.ref = insTdD($4.ref, $1);
        $$.talla = $4.talla + TALLA_TIPO_SIMPLE;
        insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1);
    }
    ;

bloque:
    '{'
    {
        emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
        emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
        $<cent>$ = creaLans(si);
        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
    }
    declaVarLocal listInst RETURN expre
    {
        INF inf = obtTdD(-1);
        if (inf.tipo != $6.t) yyerror("Tipo retorno incorrecto.");
        int off_ret = -(TALLA_SEGENLACES + inf.tsp + 1);
        emite(EASIG, crArgPos(niv, $6.d), crArgNul(), crArgPos(niv, off_ret));
        completaLans($<cent>2, crArgEnt(dvar));
        if (dvar > 0) emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(dvar));
        emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
        if (strcmp(inf.nom, "main") == 0) emite(FIN, crArgNul(), crArgNul(), crArgNul());
        else emite(RET, crArgNul(), crArgNul(), crArgNul());
    }
    ';' '}'
    ;

declaVarLocal: | declaVarLocal declaVar ;
listInst: | listInst inst ;
inst: '{' listInst '}' | instExpre | instEntSal | instSelec | instIter ;
instExpre: expre ';' | ';' ;

instEntSal:
    READ '(' ID ')'
    {
        SIMB sim = obtTdS($3);
        emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.n, sim.d));
    } ';'
    | PRINT '(' expre ')'
    {
        emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, $3.d));
    } ';'
    ;

instSelec:
    IF '(' expre ')'
    {
        if ($3.t != T_LOGICO) yyerror("IF requiere logico");
        $<cent>$ = creaLans(si);
        emite(EIGUAL, crArgPos(niv, $3.d), crArgEnt(0), crArgEtq(-1));
    } inst ELSE
    {
        $<cent>$ = creaLans(si);
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
        completaLans($<cent>5, crArgEtq(si));
    } inst
    { completaLans($<cent>8, crArgEtq(si)); }
    ;

instIter:
    FOR '(' expreOP ';'
    { $<cent>$ = si; }
    expre
    {
        if ($6.t != T_LOGICO) yyerror("FOR requiere logico");
        $<cent>$ = creaLans(si);
        emite(EIGUAL, crArgPos(niv, $6.d), crArgEnt(0), crArgEtq(-1));
    } ';'
    {
        $<cent>$ = creaLans(si);
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
    }
    { $<cent>$ = si; }
    expreOP
    {
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq($<cent>5));
        completaLans($<cent>9, crArgEtq(si));
    } ')' inst
    {
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq($<cent>10));
        completaLans($<cent>7, crArgEtq(si));
    }
    ;

expreOP: { $$.t = T_VACIO; } | expre { $$ = $1; } ;

expre:
    expreLogic { $$ = $1; }
    | ID '=' expre
    {
        SIMB sim = obtTdS($1);
        $$.t = sim.t; $$.d = sim.d;
        emite(EASIG, crArgPos(niv, $3.d), crArgNul(), crArgPos(sim.n, sim.d));
    }
    | ID '[' expre ']' '=' expre
    {
        SIMB sim = obtTdS($1); DIM dim = obtTdA(sim.ref);
        $$.t = dim.telem; $$.d = creaVarTemp();
        emite(EVA, crArgPos(sim.n, sim.d), crArgPos(niv, $3.d), crArgPos(niv, $6.d));
        emite(EASIG, crArgPos(niv, $6.d), crArgNul(), crArgPos(niv, $$.d));
    }
    ;

expreLogic:
    expreIgual { $$ = $1; }
    | expreLogic opLogic expreIgual
    {
        $$.t = T_LOGICO; $$.d = creaVarTemp();
        emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
    }
    ;

expreIgual:
    expreRel { $$ = $1; }
    | expreIgual opIgual expreRel
    {
        $$.t = T_LOGICO; $$.d = creaVarTemp();
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
        emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));
    }
    ;

expreRel:
    expreAd { $$ = $1; }
    | expreRel opRel expreAd
    {
        $$.t = T_LOGICO; $$.d = creaVarTemp();
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
        emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));
    }
    ;

expreAd:
    expreMul { $$ = $1; }
    | expreAd opAd expreMul
    {
        $$.t = T_ENTERO; $$.d = creaVarTemp();
        emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
    }
    ;

expreMul:
    expreUna { $$ = $1; }
    | expreMul opMul expreUna
    {
        $$.t = T_ENTERO; $$.d = creaVarTemp();
        emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
    }
    ;

expreUna:
    expreSufi { $$ = $1; }
    | opUna expreUna
    {
        $$.d = creaVarTemp(); $$.t = $2.t;
        if ($1 == '!') emite(EDIF, crArgEnt(1), crArgPos(niv, $2.d), crArgPos(niv, $$.d));
        else if ($1 == '-') emite(ESIG, crArgPos(niv, $2.d), crArgNul(), crArgPos(niv, $$.d));
        else emite(EASIG, crArgPos(niv, $2.d), crArgNul(), crArgPos(niv, $$.d));
    }
    ;

expreSufi:
    const { $$.t = $1.t; $$.d = creaVarTemp(); emite(EASIG, crArgEnt($1.d), crArgNul(), crArgPos(niv, $$.d)); }
    | '(' expre ')' { $$ = $2; }
    | ID
    {
        SIMB sim = obtTdS($1); $$.t = sim.t;
        if (sim.n < niv && sim.t != T_ARRAY) {
            $$.d = creaVarTemp();
            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, $$.d));
        } else $$.d = sim.d;
    }
    | ID '[' expre ']'
    {
        SIMB sim = obtTdS($1); DIM dim = obtTdA(sim.ref);
        $$.t = dim.telem; $$.d = creaVarTemp();
        emite(EAV, crArgPos(sim.n, sim.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
    }
    | ID '('
    { emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(1)); }
    paramAct ')'
    {
        SIMB sim = obtTdS($1); INF inf = obtTdD(sim.ref);
        $$.t = inf.tipo; $$.d = creaVarTemp();
        emite(CALL, crArgNul(), crArgNul(), crArgEtq(sim.d));
        emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(inf.tsp));
        emite(EPOP, crArgNul(), crArgNul(), crArgPos(niv, $$.d));
    }
    ;

paramAct: { $$.ref = insTdD(-1, T_VACIO); } | listParamAct { $$ = $1; } ;
listParamAct:
    expre
    {
        emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, $1.d));
        $$.ref = insTdD(-1, $1.t);
    }
    |
    expre
    {
        emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, $1.d));
    }
    ',' listParamAct
    {

        $$.ref = insTdD($4.ref, $1.t);
    }
    ;

opLogic: OP_LOGICO_AND { $$ = EMULT; } | OP_LOGICO_OR { $$ = ESUM; } ;
opIgual: OP_IGUALDAD_EQ { $$ = EIGUAL; } | OP_IGUALDAD_NEQ { $$ = EDIST; } ;
opRel: '>' { $$ = EMAY; } | '<' { $$ = EMEN; } | OP_RELACIONAL_GE { $$ = EMAYEQ; } | OP_RELACIONAL_LE { $$ = EMENEQ; } ;
opAd: '+' { $$ = ESUM; } | '-' { $$ = EDIF; } ;
opMul: '*' { $$ = EMULT; } | '/' { $$ = EDIVI; } ;
opUna: '!' { $$ = '!'; } | '-' { $$ = '-'; } | '+' { $$ = '+'; } ;

%%
