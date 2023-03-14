#include<iostream>
#include "binaryTree.cpp"
using namespace std;

int main(){
    BinaryTree tree;
    //tree.addNode(5);
    //tree.addNode(6);
    //tree.addNode(4);
    //tree.addNode(10);
    //tree.addNode(13);
    //tree.addNode(9);
    //tree.addNode(7);
    //tree.addNode(2);
    //tree.addNode(5);
    //tree.addNode(8);
    //tree.addNode(8);
    //tree.addNode(9);
    //tree.preOrderTraversal(tree.root);
    //cout << "Left" << endl;
    //tree.leftSideTraversal(tree.root);
    //cout << endl << "Right" << endl;
    //tree.rightSideTraversal(tree.root);
    cout << tree.findHeight(tree.root);
    return 0;
}