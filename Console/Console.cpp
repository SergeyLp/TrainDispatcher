// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#ifndef USED_PRECOMPILE
#include <iostream>
#endif
#include "../Core/Railway.h"
using std::cout;

int main() {
  Railway railway{};
  Line l1, l2;
  Twain tw1;
  Station st1;
  Section sect1;
  Block bl1("test", 0, 10);
  Block bl2("test", 10, 20);
  Block bl3("test", 20, 30);
  Block bl4("test", 30, 40);
  Block bl5("test", 40, 50);
  Block bl6("test", 50, 60);
  Block bl7("test", 60, 70);
  Block bl8("test", 70, 80);

  std::string s{ "Test" };

  cout << bl1;
}
