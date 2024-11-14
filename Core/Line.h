#pragma once
#ifndef USED_PRECOMPILE
#include <list>
#endif
#include "Twain.h"

class Line {
  using sectlist = std::list<Twain>;
  sectlist  sections;
};

