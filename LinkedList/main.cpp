#include<iostream>
#include "Linked_list.cpp"
using namespace std;



int main(){
    LinkedList list1;
    //list1.push(5);
    //list1.push(6);
    //list1.push(7);
    list1.del(8);
    list1.print_list();
    
    //cout << list1.isEmpty();
    return 0;
}