//
// Created by Cecilia Wang on 2023/10/5.
//

#ifndef CPPBASIC_A_H
#define CPPBASIC_A_H


class A {
private:
    int x_;
public:
    explicit A(int x);
    ~A();
    bool operator ==(const A& other) const;
    static void Foo();
};


#endif //CPPBASIC_A_H
