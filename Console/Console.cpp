// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#ifndef USED_PRECOMPILE
#include <iostream>
#include <fstream>
#endif
#include "Coord.h"
#include "CsvReader.h"

using std::cout;
using std::string;
using std::stoi;


int main(int argc, char* argv[]) {

  if (argc == 2) {
    read_csv(argv[1]);
  }

  Coord c{1, 2};
  //cout << c.x << " " << c.y << "\n";
}
