@echo off
echo Building Visual Novel for lab05 branch...

mkdir build 2>nul
cd build

echo Running CMake...
cmake ..

echo Building project...
cmake --build .

echo Running visual novel...
visual_novel.exe

