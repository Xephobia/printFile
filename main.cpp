#include <iostream>

#include "printFile.hpp"

int main() {
  std::wstring str;
  std::getline(std::wcin,str);
  printFile(str);

  return 0;
}