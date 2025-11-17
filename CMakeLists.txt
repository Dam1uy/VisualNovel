cmake_minimum_required(VERSION 3.10)
project(VisualNovelLab05)

# Setări de bază
set(CMAKE_CXX_STANDARD 11)

# Creare bibliotecă statică din codul existent
add_library(novel_engine STATIC engine.cpp)

# Executabil care folosește biblioteca
add_executable(visual_novel main.cpp)

# Link biblioteca la executabil
target_link_libraries(visual_novel novel_engine)