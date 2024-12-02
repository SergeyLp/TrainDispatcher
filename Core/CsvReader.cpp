// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "CsvReader.h"

using std::getline;
using std::string;
using std::vector;

std::list<std::vector<string> > read_csv(const char* file_name) {
  
  std::list<vector<string> > result;

  std::ifstream file(file_name);

  if (!file.is_open()) {   
    //std::cerr << "Error opening the file!" << file_name << "\n";
    throw FileError();
  } else {
    string line;
    while (getline(file, line)) {
      std::stringstream sstream(line);
      string val;
      std::vector<string> vals;

      while (getline(sstream, val, ',')) {
        vals.push_back(val);
      }
      result.push_back(vals);
    }

    file.close();
  }
  return result;
}

