windres icon.rc -O coff -o icon.res
g++ -shared -g -std=c++17 printFile.cpp -o libPrintFile.dll
g++ -g main.cpp libPrintFile.dll icon.res -o printFile.exe