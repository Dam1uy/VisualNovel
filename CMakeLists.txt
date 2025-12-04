cmake_minimum_required(VERSION 3.10)
project(VisualNovelLab03)

set(CMAKE_CXX_STANDARD 17)

add_library(novel_core STATIC
    character.cpp
    renderable.hpp
)

add_executable(visual_novel main.cpp)

target_link_libraries(visual_novel novel_core)

add_compile_options("/utf-8")
