#include<iostream>
using namespace std;

#include "LinkedList.h"


LinkedList::LinkedList(){
    this->HEAD = NULL;
    this->TAIL = NULL;
}

void LinkedList::print(char seperator){
    cout << "Contents of the list: " << endl;
    for (Node* t = HEAD; t != NULL; t = t-> next){
        cout << t->info << seperator << endl;
    }
}

void LinkedList::add(Node *pred, int data){
    Node * newnode = new Node(data , pred -> next);
    pred -> next = newnode ;
}



