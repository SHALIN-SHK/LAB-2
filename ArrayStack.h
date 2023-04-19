#define ArrayStack_h
#ifndef ArrayStack_h

#include "Stack.h"

#define MAXSIZE 10

class ArrayStack : public Stack{
    public:
        ArrayStack() {topIndex = -1}
        ~ArrayStack() {}
         void push(int item);
         int pop() ;
         int top();
         bool isEmpty();
         bool isFull() ;
    private:
        int data[MAXSIZE];
        int topIndex;

};

#endif