#include<iostream>
// #include<Linked List>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    cout<<endl;
    return n;
}
void display(Node* head ){
    if(head == NULL){
        // cout<<head->val;
        return;
    }
    cout<<head->val<<" ";
    display(head->next);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(46);
    Node* d = new Node(6);
    a->next= b;
    b->next= c;
    c->next = d;
    d->next = NULL;
    display(a);

}
