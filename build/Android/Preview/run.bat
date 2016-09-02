:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Targets\Android\run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" "%~dp0MyFirstFuseProject"
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0MyFirstFuseProject.apk" ^
    --package=com.apps.myfirstfuseproject ^
    --activity=MyFirstFuseProject ^
    --sym-dir="%~dp0MyFirstFuseProject\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
