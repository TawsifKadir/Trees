#include<iostream>
#include "queue.h"

using namespace std;

queue::queue(){
    bottom = NULL;
    top = NULL;
}

bool queue::isEmpty(){
    return (top == NULL);
}

void queue::push(int item){
    Node *new_node = new Node;
    new_node->data = item;
    if(isEmpty()){
        top = new_node;
        top->next = NULL;
        bottom = top;
    }else{
        new_node->next = top;
        top = new_node;
    }
}

int queue::pop(){
    Node* ptr = bottom;
    Node* itr = top;
    while(itr->next != bottom){
        itr = itr->next;
    }
    bottom = itr;
    bottom->next = NULL;
    return ptr->data;
}

int queue::peek(){
    return bottom->data;
}

void queue::printQueue(){
    if(isEmpty()){
        return;
    }
    else{
        Node *ptr = top;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}