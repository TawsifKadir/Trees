#include<iostream>
#include "stacks.h"

using namespace std;

stack::stack(){
    top = NULL;
}

void stack::Push(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

bool stack::isEmpty(){
    return (top == NULL);
}

int stack::Pop(){

    try{
        if(!isEmpty()){
        Node *temp = top;
        top = top->next;
        return temp->data;
    }
    else{
        //cout << "Stack Empty";
        throw std::invalid_argument("Stack is Empty");
        //return -1;
        }
    }catch(std::invalid_argument &e){
        cout << "Stack is empty";
    }
}

int stack::Top(){  
    try{
        if(!isEmpty()){
        return top->data;
    }
    else{
        throw std::invalid_argument("");
        //return -1;
    }
    }
    catch(std::invalid_argument &e){
        cout << "Stack is empty";
    }
}

void stack::printStack(){
    Node *ptr = top;
    if(isEmpty()){
        return;
    }
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}