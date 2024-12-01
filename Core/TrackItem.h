#pragma once
#include "Coord.h"

enum TrkType : char {
  TRACK = '0',
  TEXT = '4',
};

class TrackItem {
public:
  Coord place{0,0}, wlink{0,0}, elink{0,0};
  char direction{'\0'}; // Must be deleted !
  char is_station{'\0'};
  int len{0};
  std::string to_string() const;

};

std::ostream& operator << (std::ostream& strm, const TrackItem& track_item);
