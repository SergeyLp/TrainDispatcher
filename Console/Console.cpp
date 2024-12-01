// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#ifndef USED_PRECOMPILE
#include <iostream>
#include <fstream>
#endif
#include "TrackItem.h"

using std::cout;
using std::string;
using std::getline;
using std::stoi;

void read_trk(const char* file_name) {
  std::ifstream file(file_name);
  if (!file.is_open()) {
    std::cerr << "Error opening the file!" << file_name << "\n";
  } else {
    string line;
    while (getline(file, line)) {
      std::stringstream sstream(line);
      string val;
      char item_type = '\0';
      TrackItem item;
      bool parse_state_good = false;
      Coord c{ 0,0 };
      Coord w{ 0,0 };
      Coord e{ 0,0 };
      char d = '\0';
      char s = '\0';
      int l = 0;

      for (int i = 0; getline(sstream, val, ','); i++) {
        if (i == 0) {
          item_type = val[0];
        } else {
          if (item_type == TrkType::TRACK) {
            switch (i) {
            case 3:
              d = val[0];
              break;
            case 4:
              s = val[0];
              break;
            case 5:
              l = stol(val);
              break;
            case 1:
              c.x = stoi(val);
              break;
            case 2:
              c.y = stoi(val);
              break;
            case 6:
              w.x = stoi(val);
              break;
            case 7:
              w.y = stoi(val);
              break;
            case 8:
              e.x = stoi(val);
              break;
            case 9:
              e.y = stoi(val);
              parse_state_good = true;
              break;
            }
            //cout << val << " ";
          }
        }
        //cout << val << "\t";
      }
      if (parse_state_good) {
        item.direction = d;
        item.place = c;
        item.elink = e;
        item.wlink = w;
        item.is_station = s;
        item.len = l;

        cout << item << "\n";
      }
    }

    file.close();
  }
}


int main(int argc, char* argv[]) {

  if (argc == 2) {
    read_trk(argv[1]);
  }

  Coord c{1, 2};
  //cout << c.x << " " << c.y << "\n";
}
