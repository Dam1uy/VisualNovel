@echo off
set CC=cl.exe
set CXX=cl.exe
set CXXFLAGS=/nologo /W3 /WX /MD /O2 /DWIN32 /D_WINDOWS /DNDEBUG /EHsc
set LDFLAGS=/nologo
set AR=lib.exe
set ARFLAGS=/nologo

set RM=del /Q
set RMDIR=rd /S /Q

set APP_NAME=VisualNovel

 if "%1"=="" (
	goto prepare
)
 if "%1"=="clean" (
	goto clean
)

:prepare
	echo Preparing build environment...
	if not exist build mkdir build


:compile
	echo Compiling source files...
	%CC% %CXXFLAGS% /c main.cpp /Fobuild\main.obj
	%CC% %CXXFLAGS% /c character.cpp /Fobuild\character.obj
	%CC% %CXXFLAGS% /c Dialog.cpp /Fobuild\Dialog.obj
	%CC% %CXXFLAGS% /c engine.cpp /Fobuild\engine.obj
	%CC% %CXXFLAGS% /c Scene.cpp /Fobuild\Scene.obj



:link
	echo Linking object files...
	%CXX% %LDFLAGS% build\main.obj build\character.obj build\Dialog.obj build\engine.obj build\Scene.obj -Febuild\%APP_NAME%.exe
	echo Build complete: build\%APP_NAME%.exe
	goto :eof


:clean
	%RM% build\*.obj
	%RM% build\*.lib
	%RM% build\*.exe
	%RMDIR% build
:eof
pause
