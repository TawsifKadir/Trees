#include<iostream>
#include "queue.cpp"

int main(){
    queue q1;
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    //q1.printQueue();
    cout << q1.pop();
    //cout << endl;
    //q1.printQueue();
    return 0;
}