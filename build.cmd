@echo off
echo ===== Building Visual Novel Base (lab04) =====

if not exist build mkdir build
cd build

echo -- Running CMake --
cmake .. -G "Visual Studio 17 2022"

echo -- Building --
cmake --build . --config Debug

echo -- Running demo --
Debug\visual_novel.exe

echo ===============================================
pause

