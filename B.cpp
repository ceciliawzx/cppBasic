//
// Created by Cecilia Wang on 2023/10/5.
//

#include "B.h"

// notice how subclass is calling the super
B::B(int x, int y): A(x), y_(y){}

void B::Foo() {
  A::Foo();
  std::cout << "Hello from B!" << std::endl;
}
