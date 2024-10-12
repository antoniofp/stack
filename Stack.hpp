
#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Node{
    int data;
    Node* next;
};

class Stack{
    private:
        Node* topNode;
    public:
        Stack(): topNode(nullptr){};
        void push(int value){
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = topNode;
            topNode = newNode;
        };
        void pop(){

            if(isEmpty()){
                std::cout << "Stack is empty" << std::endl;
                return;
            }
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp; 
        };
        int top(){
            if(isEmpty()){
                std::cout << "Stack is empty" << std::endl;
                return -1;
            }
            return topNode->data;
        };
        bool isEmpty(){
            return topNode == nullptr;
        };
        int peek(int index);
};

#endif // STACK_H