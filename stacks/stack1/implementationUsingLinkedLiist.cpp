#include<iostream>
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
class LinkedList{
private:
    Node* head;
    int s;
public:
    LinkedList(){
        head = NULL;
        s=0;
    }
    //pushAtHead
    void pushAtHead(int val){
        Node* temp = new Node(val);
        if(s>0){
        temp->next = head;
        head = temp;
        }
        else head = temp;
        s++;
    }
    void deleteAtHead(){
        if(s==0) cout<<"error occur: !!";
        else if(s>0){
            head = head->next;
        }
        s--;
    }
    int displayAtHead(){
       return head->val; 
    }
    void deleteAtTail(){
        if(s==0) cout<<"error occur:!!!";
        else if(s==1) deleteAtHead();
        else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp->next = NULL;
            }
        }
    }

};
class stack{
private:
    LinkedList ll;
    int s;
public:
    stack(){
        s=0;
    }
    //push
    void push(int val){
        ll.pushAtHead(val);
        s++;
    }
    void pop(){
        ll.deleteAtHead();
        s--;
    }
    int top(){
        return ll.displayAtHead();
    }

};
int main(){
    stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top();
    st.pop();
    cout<<endl<<st.top(); //proper worjing

}