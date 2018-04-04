project(TermLib)

include_directories(source)

set(SOURCE_LIB TermLib.c)
add_library(TermLib STATIC ${SOURCE_LIB})
