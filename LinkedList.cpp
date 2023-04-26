#include<iostream>
using namespace std;

#include "LinkedList.h"




bool LinkedList::isEmpty(){
    if(HEAD == NULL && TAIL == NULL){
        return true;
    }
    else{
        return false;
    }
}

void LinkedList::traverse(char seperator){
    cout << endl << "Contents of the list: " << endl;
    for (Node* t = HEAD; t != NULL; t = t-> next){
        cout << t->data << seperator ;
    }
}

void LinkedList::add(Node *pred, int data){
    if(!this->isEmpty()){
    Node * newnode = new Node(data , pred -> next);
    pred -> next = newnode ;
    }
    else{
        cout << "empty List NO PREDECESSOR" << endl;
    }
}

void LinkedList::addToTail(int data){
    Node * newnode = new Node(data);
    if(this->isEmpty()){
        HEAD = newnode;
        TAIL = newnode;
        newnode->next = NULL;
    }
    else{
        TAIL->next = newnode;
        newnode->next = NULL;
        TAIL = newnode;
    }
    
}

void LinkedList::addToHead(int data){
    Node * newnode = new Node(data);
    if(this->isEmpty()){
        HEAD = newnode;
        newnode->next = NULL;
        TAIL = newnode;
    }
    else if(!this->isEmpty()){
        newnode-> next = (HEAD);
        HEAD = newnode;
    }

}

void LinkedList::removenode(int data)
{
    if (search(data))
    {
        if (HEAD->data == data)
        {
            removefromhead();
        }
        else
        {
            Node *temp = HEAD->next;
            Node *prev = HEAD;

            while (temp != TAIL)
            {
                if (temp->data == data)
                    break;
                prev = prev->next;
                temp = temp->next;
            }

            if (temp != nullptr)
            {
                prev->next = temp->next;
                delete temp;
                if (prev->next == nullptr)
                    TAIL = prev;
            }
        }
    }
    else
    {
        std::cout << endl << data << " not found\n";
    }
}

// void LinkedList::removenode(int data){
//     // if (isEmpty()){
//     //     cout << "empty linked list" << endl;
//     // }

//     // else{
//     //     // if(search(data)){
//     //     //     Node *temp = new Node;
//     //     //     Node *NodeToDelete = new Node;
//     //     //     temp->next= this->retrieve(data);
//     //     //     NodeToDelete = temp ->next ;
//     //     //     temp->next = temp->next->next;
//     //     //     NodeToDelete = NULL;
//     //     //     // delete NodeToDelete;
//     //     // }


//     //     Node* nodeToDelete;
//     //     Node *temp = new Node;
//     //     for(Node* temp = HEAD;temp != NULL; temp = temp-> next){
//     //         if(temp-> next-> data == data){
//     //             nodeToDelete = new Node;
//     //             nodeToDelete = temp -> next;
//     //             temp -> next = nodeToDelete->next;
//     //             nodeToDelete = NULL;
//     //         }
//     //     }
//     // }
    
// }

void LinkedList::removefromhead(){
    if (isEmpty()){
        cout << "Empty list" << endl;
    }
    else{
        Node *temp = HEAD;
        int data = temp->data;
        HEAD = HEAD-> next;
        if(HEAD == NULL){
            TAIL = NULL;
        }
        delete temp;
    }
}

bool LinkedList::search(int info){
    if (isEmpty()){
        cout << "Empty list" << endl;
    }
    else{
        Node *temp = HEAD;
        while(temp != NULL){
            if(temp->data == info){
                return true;
                break;
            }
            temp = temp->next;
        }
        if (temp == TAIL && temp-> data != info){
            return false;
        }
    }

}

Node* LinkedList::retrieve(int data)
{
    Node *outputPtr = NULL;
    if(search(data)){
        Node *outputPtr = HEAD;
        while(outputPtr != NULL){
            if(outputPtr->data == data){
                return outputPtr;
            }
                outputPtr = outputPtr-> next;
        }
    }
    else{
        
        return outputPtr ;
    }
}