@echo off
echo Building Visual Novel for lab05 branch...

mkdir build 2>nul
cd build

echo Compiling static library...
g++ -c ../engine.cpp -o novel_engine.o
ar rcs libnovel_engine.a novel_engine.o

echo Building executable with library...
g++ ../main.cpp -L. -lnovel_engine -o visual_novel_lab05.exe

echo Running visual novel...
visual_novel_lab05.exe

