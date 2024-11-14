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