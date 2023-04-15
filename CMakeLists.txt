cmake_minimum_required(VERSION 3.20)
project (Sanitizers LANGUAGES C CXX)

add_compile_options(-g)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GCC")
    add_executable(dangling examples/dangling.cpp)
    target_compile_options(dangling PRIVATE -fsanitize=undefined)
    target_link_options(dangling PRIVATE -fsanitize=undefined)
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_executable(memory examples/memory.cpp)
    target_compile_options(memory PRIVATE -fsanitize=memory)
    target_link_options(memory PRIVATE -fsanitize=memory)
endif()

add_executable(leak examples/leak.c)
target_compile_options(leak PRIVATE -fsanitize=leak)
target_link_options(leak PRIVATE -fsanitize=leak)

add_executable(address examples/address.cpp)
target_compile_options(address PRIVATE -fsanitize=address)
target_link_options(address PRIVATE -fsanitize=address)

add_executable(thread examples/thread.cpp)
target_compile_options(thread PRIVATE -fsanitize=thread)
target_link_options(thread PRIVATE -fsanitize=thread)

add_executable(undefined examples/undefined.cpp)
target_compile_options(undefined PRIVATE -fsanitize=undefined)
target_link_options(undefined PRIVATE -fsanitize=undefined)
