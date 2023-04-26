#ifndef Queue_h
#define Queue_h

class Queue
{
    public:
        Queue(){}
        ~Queue(){}
        virtual bool isempty() = 0;
        virtual bool isfull() = 0;
        virtual void enqueue(int data) = 0;
        virtual void dequeue() = 0;
        virtual int get_front() = 0;
        virtual int get_rear() = 0;
    
};



#endif