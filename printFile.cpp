#include "printFile.hpp"

#include <filesystem>
#include <iostream>

#include "windows.h"

void printFile(std::wstring path) {
  try {
    for (auto &a : std::filesystem::recursive_directory_iterator(path)) {
      std::cout << a << '\n';
    }
  } catch (std::filesystem::filesystem_error error) {
    MessageBox(NULL, LPCSTR(error.what()), LPCSTR("path entered is invalid"),
               MB_OK | MB_ICONERROR);
  }
}