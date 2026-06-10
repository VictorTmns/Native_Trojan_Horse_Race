

add_library(NTHR_Engine STATIC Core/Engine.cpp Core/Engine.h)
target_include_directories(NTHR_Engine INTERFACE ${CMAKE_CURRENT_LIST_DIR})