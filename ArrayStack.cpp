#include<iostream>
using namespace std;

#include "../include/ArrayStack.h"


// bool ArrayStack::isFull(){
//     if (this->top == MAXSIZE - 1){ 
//             return true;
//         }
//     else{
//             return false;
//     }
// }

bool ArrayStack::isEmpty(){
    if (this->top == -1){ 
            return true;
        }
    else {
            return false;
    }
}

int ArrayStack::pop(){
    this->top--;
    return data[0];

}

void ArrayStack::push(int item){
    if (isFull()){
        cout << "List is full" << endl;
    }
    else{
    this->top++;
    this->data[top] = item;
    cout << "Item added" << item << endl;
}
}

void ArrayStack::top(){
    return data[topIndex];
   
}



