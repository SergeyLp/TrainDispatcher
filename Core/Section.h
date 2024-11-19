#pragma once
#ifndef USED_PRECOMPILE
#include <list>
#endif
#include "Block.h"

class Section {
  using blocklist = std::list<Block>;
  blocklist blocks;

public:
  void append(const Block& block);
};

