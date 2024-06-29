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
   
    
};
void display(Node* head){
    while(head){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL";
}
Node* reverse(Node* head){
    Node* ahead = head;
    Node* temp = NULL;
    cout<<endl;
    while(ahead){
        
        ahead = head->next;
        head ->next = temp;
        temp = head;
        head = ahead;
        // cout<<head->val<<" ";
    }
    cout<<endl;
    return temp;

}
int main(){
   int n , rem;
   cout<<"enter a number: ";
   cin>>n;
   Node* h = new Node(n%10);
   Node* temp = h;
   while(n!=0){
        n/=10;
        if(n==0) break;
        temp->next =new Node(n%10);
        temp = temp->next;
    }
    display(h);
   h =  reverse(h);
    display(h);

}