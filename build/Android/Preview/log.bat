:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Targets\Android\log.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=
set ADB=%SDK_DIR%\platform-tools\adb.exe

%ADB% logcat -s "Debug","dalvik","error","Error","BufferQueue","XliApp","Xli","DEBUG","System.err","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","MyFirstFuseProject"
