// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "../Core/Railway.h"

TEST(GloabalTest, Ctors) {
  Railway railway{};
  Line l1, l2;
  Twain tw1;
  Station st1;
  Section sect1;
  Block bl1("test", 0, 10);

  SUCCEED();
}

TEST(SectionTest, Append) {
  Section sect1;

  Block bl1("test", 0, 10);
  Block bl2("test", 0, 10);
  Block bl3("test", 0, 10);
  Block bl4("test", 0, 10);
  Block bl5("test", 0, 10);
  Block bl6("test", 0, 10);
  Block bl7("test", 0, 10);
  Block bl8("test", 0, 10);

  sect1.append(bl1);
  sect1.append(bl2);

  Railway railway{};
  Line l1, l2;
  Twain tw1;
  Station st1;
  Section sect1;
  //std::string s{ "Test" };

  SUCCEED();
}
