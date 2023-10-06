cmake_minimum_required(VERSION 3.24)
project(cppBasic)

set(CMAKE_CXX_STANDARD 17)

add_executable(cppBasic main.cpp Basic.cpp Basic.h A.cpp A.h B.cpp B.h linked_list.cpp linked_list.h)
