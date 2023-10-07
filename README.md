# onboarding_lab1
Onboarding Lab 1 for NYU ProcDesign

cmake is toolchain program: runs several tools such as compilers, linker, simulators, etc. I am using cmake version 3.27.6 for this lab. Major - 3; Minor - 27; Patch - 6.

(NOTE: Must make change permanent before attempting to run anything in the terminal!)

```
{
add_executable(hello_world)
target_sources(hello_world PRIVATE hello.cpp)
}
```

^ Above lines tells cmake about new executable "hello_world" and its source code file "hello.cpp".