cmake_minimum_required(VERSION 3.0)

project(asgard LANGUAGES C)

add_executable(asgard main.c lib.c lib.h ArrayList.c ArrayList.h)

install(TARGETS asgard RUNTIME DESTINATION bin)
