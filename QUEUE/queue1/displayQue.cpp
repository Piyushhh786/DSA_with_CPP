#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int s = q.size();
    for(int i= 0;i<s;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
void reverse(queue<int> & q){
    int s = q.size();
    //it cant be done with one extra queue but it can be done by stack arr vector
    stack<int>st;
    for(int i = 0;i<s;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i =0;i<s ;i++){
        q.push(st.top());
        st.pop();
    }

}
int main(){
    //display queue without distorting it 
    // TC: O(n) and SC: O(1) while in stack its need one extra stack
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);
    cout<<"before reversing the queue is : ";
    display(q);
    reverse(q);
    cout<<endl<<"after reversing the queue is : ";
    display(q);
}