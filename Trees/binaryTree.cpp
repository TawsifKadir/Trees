#include "binaryTree.h"
#include<iostream>

using namespace std;

BinaryTree::BinaryTree(){
    root = nullptr;
}

void BinaryTree::addNode(int data){
    Node* newNode = new Node(data);

    if(root == nullptr){
        root = newNode;
    }
    else{
        Node* focusNode = root;
        Node* parent;
        while(true){
            parent = focusNode;
            if(data < focusNode->data){
                focusNode = focusNode->left;
                if(focusNode == nullptr){
                    parent->left = newNode;
                    return;
                }
            }else{
                focusNode = focusNode->right;
                if(focusNode == nullptr){
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
    
}

void BinaryTree::preOrderTraversal(Node *Focusnode){
    if(Focusnode != nullptr){
        cout << Focusnode->data << " ";
        preOrderTraversal(Focusnode->left);
        //cout << endl;
        preOrderTraversal(Focusnode->right);
    }
}

void BinaryTree::leftSideTraversal(Node *focusNode){
    if(focusNode != nullptr){
        cout << focusNode->data << " ";
        leftSideTraversal(focusNode->left);
    }
}

void BinaryTree::rightSideTraversal(Node* focusNode){
    if(focusNode != nullptr){
        cout << focusNode->data << " ";
        rightSideTraversal(focusNode->right);
    }
}

BinaryTree::Node* BinaryTree::search(Node* focusnode, int key){
    if(focusnode == NULL){
        cout << "Not Found" << endl;
        return focusnode;
    }
    else if(focusnode->data == key){
        cout << "Node Found" << endl;
        return focusnode;
    }
    if(key > focusnode->data){
        return search(focusnode->right,key);
    }
    return search(focusnode->left,key);
}

int BinaryTree::findHeight(Node* root){
    if(root == nullptr || (root->left == nullptr && root->right == nullptr)){
        return 0;
    }
    else{
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        if(leftHeight > rightHeight){
            return leftHeight+1;
        }else{
            return rightHeight+1;
        }
    }
}