#pragma once
#ifndef USED_PRECOMPILE
#include <string>
#include <format>
#endif


enum Control {
  automatic = 0,
  manual
};

class Block {
public:
  explicit Block(std::string name, double start, double finish):
    _name(name), _start(start), _finish(finish)
  {}
  inline std::string toString()const;

  enum State {
    vacant = 0,
    occupied
  };

private:
  std::string _name;
  double _start, _finish;
  State state = State::vacant;

};

std::ostream& operator << (std::ostream& strm, const Block& bl);

