@echo off
chcp 65001
echo Compiling ARK-Server-API...
echo.

"D:\Program Files\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" version.sln /p:Configuration=Ark /p:Platform=x64 /p:PlatformToolset=v142

echo.
echo Compilation completed!
echo Output file: out_lib\ArkApi.lib