cmake_minimum_required(VERSION 3.5)
project(BasicTerm)

include_directories(source)

set(SOURCE_LIB BasicTerm.c)
add_library(BasicTerm STATIC ${SOURCE_LIB})
