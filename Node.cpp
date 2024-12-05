#include "Node.h"
using namespace std;

// constructor
Node::Node(Student* s) {
  student = s;
  next = NULL;
}

// destructor
Node::~Node() {
  delete &student;
  next = NULL;
}

// set pointer to next in the list
void Node::setNext(Node* n) {
  next = n;
}

// get pointer to next in the list
Node* Node::getNext() {
  return next;
}

// get Student object stored here
Student* Node::getStudent() {
  return student;
}
