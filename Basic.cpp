#include "Basic.h"

// in c++, if we just want to plug in data by constructor, just use x_(x) in the initialize list,
// and have an empty constructor body
Basic::Basic(int x, int y) : x_(x), y_(y) {}

int Basic::GetX() const {
  return x_;
}

void Basic::SetY(int y) {
  y_ = y;
  // or point to the receiving object:
  this->y_ = y;
}

void Basic::printMsg(A *sth) {
  sth->Foo();
}
