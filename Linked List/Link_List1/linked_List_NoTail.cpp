#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
public:
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class Linked_List{
private:    
    Node* head;
    int s;
public:
    Linked_List(){
        head = NULL;
        s=0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(s==0){
            head =temp;
        }
        else{
            temp->next=head;
            head =temp;
        }
        s++;
    }
    void insertAtTail(int val){
        if(s==0) insertAtHead(val);
        if(s==1){
            Node* temp = new Node(val);
            head->next = temp;   
        }
        else {
            Node* temp = new Node(val);
            Node* tail = head;
            while(tail->next != NULL)
            tail = tail->next;
            tail->next=temp;
        }
        s++;
    }
    void display(){
        Node* i = head;
        while(i != NULL){
            cout<<i->val<<" ";
            i=i->next;
        }
        cout<<endl;
    }

};
int main(){
    Linked_List ll;
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtTail(6);
    ll.display();
    ll.insertAtTail(7);
    ll.display();
    cout<<endl<<endl<<sizeof(Node);
}