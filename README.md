# Onboarding Lab 1  (NYU ProcDesign)

I am using cmake version 3.27.6 for this lab. Major - 3; Minor - 27; Patch - 6.

Valid arguments (targets) for `make`:
- all -> does entire compilation process and creates `hello_world` executable
- clean -> removes all object and executable files. (Only way to get fresh start)
- depend
- edit_cache
- rebuild_cache
- hello_world
- hello.o -> hello.cpp object code (i.e. machine code output by assembler)
- hello.i -> expanded hello.cpp code file (i.e. file output by preprocessor)
- hello.s -> hello.cpp assembly file (i.e. code translated into assembly language)

## Questions
- Why is it important to stage changes vs. save all and committing?
- What's the difference between `make` and `ninja`?

## Additional Notes:
cmake is toolchain program: runs several tools such as compilers, linker, simulators, etc. 

(NOTE: Must make change permanent before attempting to run anything in the terminal!)

```
{
add_executable(hello_world)
target_sources(hello_world PRIVATE hello.cpp)
}
```

^ Above lines tells cmake about new executable "hello_world" and its source code file "hello.cpp".

`make` and `cmake` unrelated: 
- `make` - build system, produces program executable
- `cmake` - metabuild system, produces other build systems
`ninja` - also build system 

```
{
rm -rf *            # Removes old files from build directory to prevent errors
cmake -G ninja ..   # Produces "ninja" build system
}
```


### C++ Compiler
![C++ Compiler System](https://static.javatpoint.com/cpages/images/compilation-process-in-c2.png)
- **Preprocessor**: Generates expanded source code file (.i). Handles lines starting with '#'[^1], i.e.
    - Inclusion of header files (`#include`)
    - Macros substitution (`#define`)
    - Conditional compilation (`#if`, `#ifdef`, `#else`, `#elif`, `#endif`)
- **Compiler**: Translates expanded code into assembly language; generates assembler file (.s)
- **Assembler**: Translates assembly code into machine code; generates object file (.o) [^2]
- **Linker**: Links object files and external libraies into executable [^3]

[^1]: [Preprocessed *.i file](https://pvs-studio.com/en/blog/terms/0076/)
[^2]: [C++ Compiler Operation](https://www.javatpoint.com/compilation-process-in-c)
[^3]: [Separate Compilation](https://hackingcpp.com/cpp/lang/separate_compilation.html)

