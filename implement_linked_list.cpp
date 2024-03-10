#include <iostream>

int main () {
  struct Node {
    int data;
    Node* next;
  };
  Node* head = nullptr;
  Node* temp = new Node();
  // first insertion
  temp->data = 2;
  temp->next = nullptr;
  head = temp;

  // create a detached node
  temp = new Node();
  temp->data = 4;
  temp->next = nullptr;

  // for linked list traversal
  Node* temp1 = head;
  while (temp1->next)
  {
    temp1 = temp1->next;
  }
  temp1->next = temp;
  return 0;
}