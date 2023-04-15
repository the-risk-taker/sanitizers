# Sanitizers

Sanitizers are tools that check for certain types of bugs or security vulnerabilities in code during compilation or runtime. They can help detect issues such as buffer overflows, memory leaks, and use-after-free errors.

Examples of various sanitizer usages are located in the `examples/` directory.

## Building

Building examples with CMake (from repository root directory):

```bash
cmake -S . -B build
cmake --build build --parallel
```

Run an example - for program which uses Leak sanitizer - by executing:

```bash
build/leak
```

> [!NOTE]
> You can also build the examples yourself manually, for example: `g++ -g examples/leak.c -fsanitize=leak`
