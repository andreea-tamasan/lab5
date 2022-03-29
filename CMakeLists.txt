cmake_minimum_required(VERSION 3.21)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp Square.cpp Square.h Tests.cpp Tests.h Consola.h Consola.cpp Repository.cpp Repository.h)
