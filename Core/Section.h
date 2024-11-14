#pragma once
#ifndef USED_PRECOMPILE
#include <list>
#endif
#include "Block.h"

class Section {
private:
  using blocklist = std::list<Block>;
  blocklist blocks;
};

