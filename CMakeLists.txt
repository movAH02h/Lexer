cmake_minimum_required(VERSION 3.18)
project(SimpleLexer)

add_executable(lexer
    main.cpp
    lexer.cpp)

target_compile_options(lexer PRIVATE
    -std=c++17)
