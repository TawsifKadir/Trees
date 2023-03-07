#include<iostream>
#include"stacks.cpp"


int main(){
    stack s1;
    //s1.Push(5);
    //s1.Push(6);
    //s1.Push(7);
    //s1.Push(8);
    //s1.Push(9);
    s1.printStack();
    cout <<s1.Pop()<<endl;
    s1.printStack();
}