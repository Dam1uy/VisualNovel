cmake_minimum_required(VERSION 3.10)
project(VisualNovelLab04)

set(CMAKE_CXX_STANDARD 17)

add_library(novel_engine STATIC
    engine.cpp
    character.cpp
)

add_executable(visual_novel main.cpp)

target_link_libraries(visual_novel novel_engine)

add_compile_options("/utf-8")
