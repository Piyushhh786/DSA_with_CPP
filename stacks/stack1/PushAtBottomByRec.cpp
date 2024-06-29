#include<iostream>
#include<stack>
using namespace std;
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
int main(){
    stack<int>st;
    st.push(10);
    st.push(2);
    st.push(4);
    st.push(5);
    int a=57;
    pushAtBottom(st,a);
    cout<<st.size();//working
    
}