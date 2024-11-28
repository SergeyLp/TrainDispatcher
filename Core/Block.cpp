// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "Block.h"

inline std::string Block::toString() const {
  return std::format("({}: {}-{}) ", _name, _start, _finish);
}

std::ostream& operator << (std::ostream& strm, const Block& bl){
  strm << bl.toString();
  return strm;
}

//inline std::istream& operator >> (std::istream& strm, Block& bl) {
//  std::string shortName;
//  strm >> sp.name;
//  strm >> shortName;
//  strm >> sp.distance;
//  return strm;
//}
