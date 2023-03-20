cmake_minimum_required(VERSION 3.0.0)
project(pointer VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(basic_pointers basic_pointers.cpp)
add_executable(arithmetics arithmetics_pointers.cpp)
add_executable(new_delete_operators new_delete_operators.cpp)
add_executable(const_pointers const_pointers.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
