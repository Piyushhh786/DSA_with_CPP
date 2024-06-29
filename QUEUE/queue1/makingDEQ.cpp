#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class deque{
    Node* front;
    Node* back;
    int s;
    public:
    deque(){
        front = back = NULL;
        s = 0;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(s==0){
            front = back = temp;
        }
        else {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        s++;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(s==0) push_front(val);
        else {
            temp->prev = back;
            back->next = temp;
            back = temp;
        }
        s++;
    }
    void pop_back(){
        if(s==0){
            cout<<"error: deq is empty!!!"<<endl;
            return;
        }
        Node* temp = back;
        back=back->prev;
        delete(temp);
        s--;
    }
    void pop_front(){
        if(s==0){
            cout<<"error: deq is empty!!!"<<endl;
        }
        Node* temp = front;
        front = front->next;

        delete(temp);
        s--;
    }
    int size(){
        return s;
    }
    int getFront(){
        if(s==0) {
            cout<<"Error: deq is empty!!!!"<<endl;
            return -1;
        }
        else return front->val;
    }
    int getBack(){
        if(s==0) {
            cout<<"Error: deq is empty!!!!"<<endl;
            return -1;
        }
        else return back->val;
    }
};
int main(){
    deque dq;
    dq.push_front(6);
    dq.push_back(7);
    dq.push_front(9);
    dq.push_front(0);
    dq.push_back(76);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.getFront()<<" "<<dq.getBack();

}