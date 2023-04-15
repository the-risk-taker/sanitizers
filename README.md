# Sanitizers

Lightning Talk about sanitizers with examples.

Sanitizers are tools that check for certain types of bugs or security vulnerabilities in code during compilation or runtime. They can help detect issues such as buffer overflows, memory leaks, and use-after-free errors.

Examples are located in `src` directory. You can build examples with CMake or manually by calling the compiler.

## Building

Building examples with CMake (from repository root directory):

```shell
cmake -S . -B <build_dir>
cmake --build <build_dir>
```

Specific example can be run by:

```shell
<build_dir>/./leak
```

> NOTE: You can also build the examples yourself by calling the compiler like this: `g++ -g leak.c -fsanitize=leak`.
