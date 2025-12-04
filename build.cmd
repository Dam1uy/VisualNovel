@echo off
echo ============================================
echo   Building Visual Novel Engine (lab05)
echo ============================================

mkdir build 2>nul
cd build

echo.
echo --- Running CMake ---
cmake ..

echo.
echo --- Building project (library + exe) ---
cmake --build .

echo.
echo --- Running demonstration ---
Debug\visual_novel.exe

echo.
echo ============================================
echo Demonstration complete.
echo ============================================
pause




