//
// Created by Cecilia Wang on 2023/10/6.
//

#ifndef CPPBASIC_LINKED_LIST_H
#define CPPBASIC_LINKED_LIST_H

#include <memory>
#include <cassert>
#include <utility>
#include <iostream>

template<typename T>

class LinkedList {
public:
    LinkedList();
    void Add(T elem);
    bool Contains(T candidate_elem);

private:
    struct Node {
        explicit Node(T data) : data(data), next(nullptr) {}
        T data;
        std::unique_ptr<Node> next;
    };

    std::unique_ptr<Node> head_;
    Node* tail_;
};


#endif //CPPBASIC_LINKED_LIST_H
