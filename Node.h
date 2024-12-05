#ifndef NODE_H
#define NODE_H

#include "Student.h"

using namespace std;

// Node class for a linked list of Student objects.

class Node {
public:
  // constructor/destructor
  Node(Student*);
  ~Node();
  
  // getters and setters
  void setNext(Node*); // set pointer to next in the list
  Node* getNext(); // get pointer to next in the list
  Student* getStudent(); // get Student object stored here
  
private:
  Student* student; // Student object
  Node* next; // pointer to next in list
};

#endif
