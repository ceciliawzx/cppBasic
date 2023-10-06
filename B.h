//
// Created by Cecilia Wang on 2023/10/5.
//

#ifndef CPPBASIC_B_H
#define CPPBASIC_B_H


#include "A.h"
#include <iostream>

class B : public A {
private:
    int y_;
public:
    B(int x, int y);
    static void Foo();
};


#endif //CPPBASIC_B_H
