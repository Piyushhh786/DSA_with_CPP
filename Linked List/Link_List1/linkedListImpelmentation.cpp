#include<iostream>
using namespace std;
class Node{
    // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this-> val = val;
        this-> next = NULL;
    }
};

class Linked_List{ // user defined data structure
private:
    int s;
    Node* head;
    Node* tail;
public:
    Linked_List(){
        head = NULL;
        tail = NULL;
        s=0;
    }
    int getElement(int idx){
         if(idx == 0) return head->val;
        else if(idx == s) return tail->val;
        else if(idx > s || idx<0) {cout<<"Error index out of bound!!"; 
            return -1;
        }
        else{
        Node* temp = head;
        for(int i=0 ; i<idx;i++) temp=temp->next;
        return temp->val;
        }
    }
    void insertAtIdx(int idx , int val){
        if(idx == 0) pushAtBegin(val);
        else if(idx == s) pushAtEnd(val);
        else if(idx > s || idx<0) {cout<<"Error index out of bound!!"; 
        s--;
        }

        else{
            Node* temp = new Node(val);
            Node* Nhead = head;
            int i =0;
            while(i<idx){ 
                // Node* oneLink = Nhead
                if(i == idx-1){
                    temp-> next = Nhead-> next;
                    Nhead->next = temp ;
                }
                Nhead=Nhead-> next;
                i++;
            }
        }
        s++;
    }
    void deleteAtIdx(int idx){
        Node* temp = head;
        for(int i=0;i<idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        s--;
    }
    void deleteAtTail(){
        if(s==0) cout<<"already empty!!!";
        else if(s==1){
            tail = head = NULL;
            s--;
        }
        else {
            Node* temp = head;
            for(int i=0;i<s-2;i++){
                temp=temp->next;
            }
            temp->next=NULL;
            tail = temp;
            s--;
        }
    }
    void deleteAtHead(){
        if(s==0) cout<<"already empty!! ";
        else if(s==1){
            head=tail=NULL;
            s--;
        }
        else{
            head=head->next;
            s--;
        }
    }
    void pushAtBegin(int val){
        Node* temp = new Node(val);
        if(s>0){
        temp->next = head;
        head = temp;
        }
        else {
            head = tail = temp;
        }
        s++;
    }
    void pushAtEnd(int val){
        Node* temp = new Node(val);
        if(s==0){
            head = tail = temp;
        }
        else {
            tail-> next = temp ; //* tail ke next me temp ka address daldo
            tail = temp;//* dalne ke baad tail to temp pr rakh do
        }
        s++;
    }
    void display(){
        Node* temp =  head;
        while(temp != NULL){
            cout<<temp-> val<<" ";
            temp=temp-> next;
        }
        cout<<endl;
    }
};

int main(){
    Linked_List ll;
    ll.pushAtEnd(10);
    ll.display();
    ll.pushAtEnd(20);
    ll.display();
    ll.pushAtBegin(30);
    ll.pushAtBegin(40);
    ll.pushAtBegin(30);
    ll.pushAtEnd(36);
    ll.display();
    ll.insertAtIdx(5,56);
    ll.display();
    // cout<<ll.getElement(8);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();

}