#include<iostream>
using namespace std;
class Node{
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
    int s=0;
    Node* head = NULL;
    Node* tail = NULL;
    void push(int val){
        Node* temp = new Node(val);
        if(s==0){
            head =  temp;
            tail = head;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
}