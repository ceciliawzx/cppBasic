#ifndef CPPBASIC_BASIC_H
#define CPPBASIC_BASIC_H


#include "B.h"

class Basic {
private: // access specifier, valid until next specifier
    int x_;
    int y_;

public:
    Basic(int x, int y);

    // const: this method is not allowed to modify the state of this instance.
    int GetX() const;

    void SetY(int y);

    void printMsg(A *sth);
};


#endif //CPPBASIC_BASIC_H
