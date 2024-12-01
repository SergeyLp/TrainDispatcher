#pragma once

template <typename T>
class Coord {
public:
  T x{}, y{};

  Coord(T x, T y) : x(x), y(y) {}
};
