#pragma once
#ifndef USED_PRECOMPILE
#include <string>
#include <iostream>
#endif

class Coord {
public:
  int x, y;

  Coord(int x, int y) : x(x), y(y) {}
  std::string to_string() const;
};

std::ostream& operator << (std::ostream& strm, const Coord& coord);
