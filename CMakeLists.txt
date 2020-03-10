cmake_minimum_required(VERSION 3.9)
project(dz1)

add_subdirectory(make_console)
add_subdirectory(make_test)

add_custom_target(dz1)

add_dependencies(dz1 console test)