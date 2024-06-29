#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next = NULL;
    }
};
class queue{
    Node* f;
    Node* b;
    int s;
public: 
    queue(){
        f = b = NULL;
        s = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(s == 0){
            f = b = temp;
        }
        else {
            b->next = temp;
            b = b->next;
        }
        s++;
    }
    void pop(){
        f = f->next;
        s--;
    }
    int front(){
        return f->val;
    }
    int back(){
        return b->val;
    }
    int size(){
        return s;
    }

};
int main(){
    queue q;
    q.push(3);
    q.push(4);
    q.push(6);
    cout<<q.front()<<" "<<q.back()<<" ";
    q.pop();
    cout<<q.front()<<" "<<q.back()<<" ";

}
