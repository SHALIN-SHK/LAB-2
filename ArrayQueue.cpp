#include <iostream>
using namespace std;

#include"ArrayQueue.h"
#include"Queue.h"

bool ArrayQueue::isfull(){
    if(rear == MAX_SIZE - 1){
        return true;
    }
    else{
        return false;
    }

}

bool ArrayQueue::isempty(){
    if (front == -1 && rear == -1){
        return true;
    } 
    else{
        return false;
    }
}

void ArrayQueue::enqueue(int data){
    if (this->isempty()){
        front = 0;
        rear++;
        arr[rear] = data;
    }
    else if(this->isfull()){
        cout << "queue is full" << endl;
    }
    else{
        arr[rear + 1] = data;
        rear = rear + 1;
    }

}

void ArrayQueue::dequeue(){
    if(this->isempty()){
        cout << "empty list" << endl;
    }
    else{
        arr[front] = 0;
        front++ ; 
    }
}

int ArrayQueue::get_front(){
    if (this->isempty()){
        cout << "empty list" << endl;
        return -1;
    }
    else{
        return arr[front];
    }

}

int ArrayQueue::get_rear(){
    if (this->isempty()){
        cout << "empty list" << endl;
        return -1;
    }
    else{
        return arr[rear];
    }
}


void ArrayQueue::display(){
    if (this->isempty()){
        cout << "empty list" << endl;
    }
    else{
        cout << endl << "Contents of the queue" << endl;
        for( int i = front; i <= rear; i++){
             cout << "  " <<  arr[i] << "  ";
        }
    }
}