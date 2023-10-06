//
// Created by Cecilia Wang on 2023/10/6.
//

#include "linked_list.h"
#include "A.h"

template<typename T>
LinkedList<T>::LinkedList() : head_(nullptr), tail_(nullptr) {}

template<typename T>
bool LinkedList<T>::Contains(T candidate_elem) {
  for (Node* temp = head_.get(); temp != nullptr; temp = temp->next.get()) {
    if (temp->data == candidate_elem) return true;
  }
  return false;
}

template<typename T>
void LinkedList<T>::Add(T elem) {
  if (head_ == nullptr) {
    // assertion
    assert(tail_ == nullptr && "Head should be null iff tail is null");
    head_ = std::make_unique<Node>(elem);
    tail_ = head_.get(); // tail_ will be the raw pointer owned by head_
  } else {
    assert(tail_ != nullptr && "Tail should not be null here");
    auto temp = std::make_unique<Node>(elem);
    tail_->next = std::move(temp);
    tail_ = tail_->next.get();
  }
}

int main() {
//  LinkedList<int> my_linked_list;
//  my_linked_list.Add(1);
//  my_linked_list.Add(3);
//  my_linked_list.Add(5);
//  assert(my_linked_list.Contains(3));
//  std::cout << my_linked_list.Contains(3) << std::endl;
//
//  LinkedList<std::string> my_linked_list2;
//  my_linked_list2.Add("Hello");
//  my_linked_list2.Add("World");
//  my_linked_list2.Add("C++!");
//  assert(my_linked_list2.Contains("Hello"));

  LinkedList<A> my_linked_list3;
  my_linked_list3.Add(A(1));
  my_linked_list3.Add(A(2));
  my_linked_list3.Add(A(3));
//  assert(my_linked_list3.Contains(A(3)));
  std::cout << "End of Main" << std::endl;
}

