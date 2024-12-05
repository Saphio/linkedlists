#include "Node.h"
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void add(Student* s, Node* &head);
void print(Node* cur, Node* head);

int main () {
  // head node
  Node* head = NULL;

  // insert some students
  char sw[80] = "sophia wang";
  char jl[80] = "julia larson";
  char aw[80] = "allison wood";

  Student* sophia = new Student(sw, 11, 4.0);
  Student* julia = new Student(jl, 10, 4.0);
  Student* allie = new Student(aw, 11, 3.5);
  
  add(sophia, head);

  print(head, head);
  
  add(julia, head);

  print(head, head);
  
  add(allie, head);

  print(head, head);
  
  return 0;
}

// add a student to the linked list
void add (Student* s, Node* &head) {
  Node* current = head;
  if (current == NULL) {
    head = new Node(s);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node(s));
  }
  return;
}

// print out the list
void print(Node* cur, Node* head) {
  if (cur == head) {
    cout << "Students: ";
  }
  if (cur != NULL) {
    cur->getStudent()->display();
    print(cur->getNext(), head);
  }
  return;
}
