@echo off
echo Running lab06 tests...

where g++ >nul 2>nul
if %errorlevel% neq 0 (
    echo g++ compiler not found.
    echo Tests skipped.
    pause
    exit /b
)

echo Compiling tests...
g++ -std=c++11 -I../ src/tests/test_character.cpp -o test_character
g++ -std=c++11 -I../ src/tests/test_scene.cpp -o test_scene

echo Running tests...
test_character
if %errorlevel% neq 0 echo test_character FAILED

test_scene
if %errorlevel% neq 0 echo test_scene FAILED

echo Done.
pause

