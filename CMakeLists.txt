cmake_minimum_required(VERSION 3.10)
project(VisualNovelLab05)

set(CMAKE_CXX_STANDARD 11)

# Biblioteca statică cu TOATE sursele
add_library(novel_engine STATIC
    engine.cpp
    character.cpp
    Dialog.cpp
    Scene.cpp
)

# Executabil principal
add_executable(visual_novel main.cpp)

# Link-ează biblioteca
target_link_libraries(visual_novel novel_engine)