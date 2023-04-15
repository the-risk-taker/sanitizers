cmake_minimum_required(VERSION 3.20)
project (Sanitizers)

add_compile_options(-g)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GCC")
    add_executable(dangling src/dangling.cpp)
    target_compile_options(dangling PUBLIC -fsanitize=undefined)
    target_link_options(dangling PUBLIC -fsanitize=undefined)
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_executable(memory src/memory.cpp)
    target_compile_options(memory PUBLIC -fsanitize=memory)
    target_link_options(memory PUBLIC -fsanitize=memory)
endif()

add_executable(leak src/leak.c)
target_compile_options(leak PUBLIC -fsanitize=leak)
target_link_options(leak PUBLIC -fsanitize=leak)

add_executable(address src/address.cpp)
target_compile_options(address PUBLIC -fsanitize=address)
target_link_options(address PUBLIC -fsanitize=address)

add_executable(thread src/thread.cpp)
target_compile_options(thread PUBLIC -fsanitize=thread)
target_link_options(thread PUBLIC -fsanitize=thread)

add_executable(undefined src/undefined.cpp)
target_compile_options(undefined PUBLIC -fsanitize=undefined)
target_link_options(undefined PUBLIC -fsanitize=undefined)
