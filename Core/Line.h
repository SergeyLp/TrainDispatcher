#pragma once
#ifndef USED_PRECOMPILE
#include <list>
#endif
#include "Twain.h"

class Line {
  using twainlist = std::list<Twain>;
  twainlist  twains;
};

