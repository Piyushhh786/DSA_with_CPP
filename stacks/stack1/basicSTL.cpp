//STL STANDARD TEMPERATE LIBRARY
#include<iostream>
#include<stack>
using namespace std;
int main(){
    //how to print stack element without stack become empty
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size();
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    // while(temp.size()>0){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<endl<<st.top()<<endl;//working...
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }


}