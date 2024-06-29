#include<iostream>
#include<stack>
using namespace std;
//! best method to reverse a stack .in this only two stack will made

void pushAtBottom(stack<int>& st,int a){
    if(st.size()==0){
        st.push(a);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st,a);
    st.push(x);
}
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    st.push(x);
    cout<<st.top()<<endl;

}
void Rev(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    Rev(st);
    pushAtBottom(st,x);
    
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(2);
    st.push(4);
    st.push(5);
    display(st);
    cout<<endl;
    Rev(st);
    display(st);
}