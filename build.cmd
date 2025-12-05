@echo off
if not exist build mkdir build

cl /EHsc /W3 /Fe:build\vn.exe main.cpp character.cpp

echo Done
pause
