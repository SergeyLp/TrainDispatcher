// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#ifndef USED_PRECOMPILE
#include <iostream>
#include <fstream>
#endif
#include "../Core/Railway.h"
#include "../Core/Coord.h"
using std::cout;
using std::string;

void read_trk(const char* file_name) {
  std::ifstream file(file_name);
  if (file.is_open()){
    string line;
    while (std::getline(file, line)) {
      std::stringstream sstream(line);
      string val;
      while (std::getline(sstream, val, ',')) {
        cout << val << "\t";
      }
      cout << "\n";
    }
    file.close();
  } else
    std::cerr << "Error opening the file!" << file_name << "\n";
}

int main(int argc, char* argv[]) {

  if (argc == 2) {
    read_trk(argv[1]);
  }

  Coord c{1, 2};
  cout << c.x << " " << c.y << "\n";
}
