//
// Created by Cecilia Wang on 2023/10/5.
//

#include "A.h"
#include "B.h"
#include "Basic.h"
#include <iostream>

A::A(int x) : x_(x) {}

void A::Foo() {
  std::cout << "WOW!" << std::endl;
}

A::~A() {
  std::cout << "Destructing A(" + std::to_string(x_) + ")" << std::endl;
}

bool A::operator==(const A &other) const {
  return this->x_ == other.x_;
}

//int main() {
//  // in c++ we can call static method on an instance, but it's better to call it on the class
////  A a = A(5);
////  a.foo();
//  A sth = B(5, 10);
//  Basic basic = Basic(1, 2);
//  basic.printMsg(&sth);
//}