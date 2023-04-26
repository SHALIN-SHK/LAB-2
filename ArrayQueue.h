#ifndef ArrayQueue_h
#define ArrayQueue_h

#include "Queue.h"

#define MAX_SIZE 10

class ArrayQueue : public Queue{
    public:
        ArrayQueue() {front = -1; rear = -1;}
        bool isfull();
        bool isempty();
        void enqueue(int data);
        void dequeue();
        int get_front();
        int get_rear();
        void display();
    private:
        int arr[MAX_SIZE];
        int front;
        int rear;
};


#endif