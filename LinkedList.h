#ifndef LinkedList_h
#define LinkedList_h

#include<iostream>
using namespace std;


class Node{
    public:
        int info ;
        Node * next;

        Node(){}
        Node(int d) : info(d), next(NULL){};
        Node(int d, Node * next) : info(d), next(next){};
     
};

class LinkedList {
    private:
        Node* HEAD;
        Node* TAIL;

    public:
        LinkedList(){}
        void print(char);
        void addToHead (int);
        void add(Node *pred , int);
        void addToTail();
        void removenode();
        void removefromhead();
        void removefromtail();
};


#endif