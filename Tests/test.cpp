// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "../Core/Railway.h"

TEST(TestCaseCtors, Ctors) {
  Railway railway{};
  Line l1, l2;
  Twain tw1;
  Station st1;
  Section sect1;
  Block bl1;

  SUCCEED();
}