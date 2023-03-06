#include<iostream>
#include"Linked_list.h"

using namespace std;

LinkedList::LinkedList(){
    topptr = NULL;
}

bool LinkedList::isEmpty(){
    return (topptr==NULL);
}

void LinkedList::push(int item){
    Node *node  = new Node;
    node->info = item;
    if(isEmpty()){
        topptr = node;
        topptr->next = NULL;
        last = topptr;
    }
    else{
        last->next = node;
        node->next = NULL;
        last = node;
    }
}

void LinkedList::print_list(){
    Node *ptr;
    ptr = topptr;
    while(ptr!=NULL){
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
}

int LinkedList::top(){
    return topptr->info;
}

void LinkedList::del(int item){
    bool found = false;
    if(isEmpty()){
        cout << "Empty List";
        return;
    }
    Node *ptr = topptr;
    if(ptr->info == item){
        topptr = topptr->next;
        return;
    }
    while(ptr->next !=NULL){
       if(ptr->next->info == item){
        found = true;
        break;
       }
    ptr = ptr->next;
    }
     if(found){
            Node *tmp;
            tmp = ptr->next;
            ptr->next = ptr->next->next;
            delete tmp;
            return;
        }
    if(!found){
        cout << "Item is not in list" << endl;
    }
}

