/* Fichero alex.l: Análisis léxico del lenguaje. */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "asin.h"

#define RET(token) { if (verbosidad) printf("%s", yytext); return token; }
%}

%option yylineno
%option noyywrap
%option noinput nounput

LETRA       [a-zA-Z_]
DIGITO      [0-9]
ID          {LETRA}({LETRA}|{DIGITO})*
CTE         {DIGITO}+
CTE_REAL    {DIGITO}+\.{DIGITO}+|{DIGITO}*\.{DIGITO}+|{DIGITO}+\.
DELIMITADOR [ \t\r]+
NUEVA_LINEA \n

%%

"//"([^\n])* { if (verbosidad) printf("%s", yytext); }

"int"           { RET(INT); }
"bool"          { RET(BOOL); }
"true"          { RET(K_TRUE); }
"false"         { RET(K_FALSE); }
"return"        { RET(RETURN); }
"read"          { RET(READ); }
"print"         { RET(PRINT); }
"if"            { RET(IF); }
"else"          { RET(ELSE); }
"for"           { RET(FOR); }

{CTE}           { yylval.cent = atoi(yytext); RET(CTE); }
{CTE_REAL}      { yylval.cent = (int)atof(yytext); RET(CTE); }
{ID}            { yylval.ident = strdup(yytext); RET(ID); }

"&&"            { RET(OP_LOGICO_AND); }
"||"            { RET(OP_LOGICO_OR); }
"=="            { RET(OP_IGUALDAD_EQ); }
"!="            { RET(OP_IGUALDAD_NEQ); }
">="            { RET(OP_RELACIONAL_GE); }
"<="            { RET(OP_RELACIONAL_LE); }

"+"             { RET('+'); }
"-"             { RET('-'); }
"*"             { RET('*'); }
"/"             { RET('/'); }
"!"             { RET('!'); }
"="             { RET('='); }
">"             { RET('>'); }
"<"             { RET('<'); }

";"             { RET(';'); }
","             { RET(','); }
"("             { RET('('); }
")"             { RET(')'); }
"{"             { RET('{'); }
"}"             { RET('}'); }
"["             { RET('['); }
"]"             { RET(']'); }

{DELIMITADOR}   { if (verbosidad) printf("%s", yytext); }
{NUEVA_LINEA}   { if (verbosidad) printf("%s", yytext); }

.               {
                    if (verbosidad) printf("%s", yytext);
                    yyerror("Caracter no reconocido");
                }
%%

