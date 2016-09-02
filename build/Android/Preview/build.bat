:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Targets\Android\build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0MyFirstFuseProject\app\src\main"
set ANT_DIR=
set JAVA_HOME=
set SUPPORT_JAR="\extras\android\support\v4\android-support-v4.jar"

echo ## 1/2: libMyFirstFuseProject.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
if exist %SUPPORT_JAR%  (
   "C:\Program Files (x86)\Fuse\uno.exe" cp %SUPPORT_JAR% libs\android-support-v4.jar || goto ERROR
) else (
    echo ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build
    echo ERROR: expected jar at %SUPPORT_JAR%
    goto ERROR
)

echo.
echo ## 2/2: MyFirstFuseProject.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
"C:\Program Files (x86)\Fuse\uno.exe" cp MyFirstFuseProject/app/src/main/bin/MyFirstFuseProject-debug.apk MyFirstFuseProject.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
