#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // Node a(56);
    // Node b(78);
    // Node c(76);
    // Node d(9);
    // dynamically, we will play whole with pointer
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(46);
    Node* d = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    //* saaf suthri printing of linked list
    Node* temp = a;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}