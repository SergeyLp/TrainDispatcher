// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#ifndef USED_PRECOMPILE
#include <iostream>
#include <fstream>
#endif
#include "../Core/Railway.h"
using std::cout;
using std::string;

void read_trk(const char* file_name) {
  std::ifstream file(file_name);
  if (!file.is_open())
    std::cerr << "Error opening the file!" << file_name << "\n";
  else{
    string line;
    while (std::getline(file, line)) {
      cout << line << "\n";
    }
    file.close();
  }

}

int main(int argc, char* argv[]) {
  for (auto i = 0; i < argc; i++) {
    cout << argv[i] << "\n";
  }
  if (argc == 2) {
    read_trk(argv[1]);
  }
}

