cmake_minimum_required(VERSION 3.10)
project(VisualNovelLab05)

set(CMAKE_CXX_STANDARD 11)
add_compile_options("/utf-8")

# Biblioteca statică
add_library(novel_engine STATIC
    engine.cpp
    character.cpp
)

# Executabilul principal
add_executable(visual_novel main.cpp)

# Link la bibliotecă
target_link_libraries(visual_novel novel_engine)
