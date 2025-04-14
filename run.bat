@echo off
g++ src\main.cpp src\encryption.cpp src\utils.cpp src\password_manager.cpp src\setup.cpp ^
    -std=c++17 -lstdc++fs ^
    -Iinclude ^
    -I"C:\Program Files\OpenSSL-Win64\include" ^
    -L"C:\Program Files\OpenSSL-Win64\lib\VC\x64\MT" ^
    -lssl -lcrypto -lws2_32 -lgdi32 -luser32 ^
    -o vault.exe

pause
