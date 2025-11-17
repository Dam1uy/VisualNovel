@echo off
echo Building Visual Novel with static library...

mkdir build 2>nul
cd build

cmake .. -G "MinGW Makefiles"
if %errorlevel% neq 0 (
    echo CMake configuration failed!
    exit /b 1
)

cmake --build .
if %errorlevel% eq 0 (
    echo Build successful!
    echo Running visual novel...
    .\visual_novel.exe
) else (
    echo Build failed!
)

