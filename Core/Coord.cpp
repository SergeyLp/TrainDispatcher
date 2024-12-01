// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "Coord.h"
#ifndef USED_PRECOMPILE
#include <format>
#endif

inline std::string Coord::to_string() const {
  return (x != 0 && y != 0) ? std::format("({},{})", x, y) : "(0)";
}

std::ostream& operator << (std::ostream& strm, const Coord& c) {
  strm << c.to_string();
  return strm;
}
