# MiniC Compiler (CMC)

A functional compiler for a subset of the C language, featuring lexical and syntactic analysis, semantic validation, and intermediate code generation.

## 🚀 Features

- **Data Types**: Supports `int` and `bool` types.
- **Control Structures**: Implements `if`, `else`, and `for` loops.
- **I/O Operations**: Built-in `read` and `print` statements.
- **Operators**:
  - Arithmetic (`+`, `-`, `*`, `/`)
  - Logical (`&&`, `||`)
  - Relational (`==`, `!=`, `>=`, `<=`, `>`, `<`)
- **Code Generation**: Generates 3-address intermediate code (`.c3d`).
- **Debug Tools**: Options to view the Symbol Table and verbose compilation traces.

## 🛠️ Architecture

The compiler is built with the following components:
- **Lexical Analyzer (`alex.l`)**: Tokenizes the source code using Flex.
- **Syntax Analyzer (`asin.y`)**: Parses the token stream and defines the grammar rules using Bison.
- **Symbol Table (`libtds`)**: Manages variable scopes and type checking.
- **Code Generator (`libgci`)**: Produces the intermediate machine code.

## 📋 Prerequisites

To build and run this project, you need:
- **GCC** (GNU Compiler Collection)
- **Flex**
- **Bison**
- **Make**

## 🔧 Installation & Build

1. Clone the repository:
   ```bash
   git clone https://github.com/iDiagoValeta/MiniC-Compiler.git
   cd MiniC-Compiler
   ```

2. Compile the project using the Makefile:
   ```bash
   make
   ```
   This will generate the `cmc` executable.

## 💻 Usage

Run the compiler with a source file as an argument:

```bash
./cmc [options] <source_file>
```

### Options
- `-v`: **Verbose mode**. Prints a trace of the compilation process.
- `-t`: **Symbol Table**. Displays the contents of the Symbol Table after compilation.

### Example

```bash
./cmc -v -t examples/test.c
```

## 📂 Project Structure

```
.
├── bin/            # Executables (Virtual Machine)
├── include/        # Header files (.h)
├── lib/            # Static libraries (libtds, libgci)
├── src/            # Source code (alex.l, asin.y, principal.c)
├── tmp/            # Temporary output files (.c3d)
├── Makefile        # Build configuration
└── cmc             # Compiled executable
```

## 📝 Example Code

The compiler supports standard C-like syntax:

```c
int main() {
    int i;
    int sum;
    sum = 0;
    
    for (i = 0; i < 10; i = i + 1) {
        sum = sum + i;
    }
    
    print(sum);
}
```
