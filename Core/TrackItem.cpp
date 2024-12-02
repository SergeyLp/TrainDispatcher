// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "TrackItem.h"

inline std::string TrackItem::to_string() const {
  return std::format("{} {} {} {} {} {}",place.to_string(), direction, is_station, len, wlink.to_string(), elink.to_string());
}

std::ostream& operator << (std::ostream& strm, const TrackItem& c) {
  strm << c.to_string();
  return strm;
}
