#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>& st,int idx,int num){
    int s= st.size();
    stack<int>temp;
    for(int i=1;i<=s-idx;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(num);
    for(int i=1;i<=s-idx;i++){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(2);
    st.push(4);
    st.push(8);
    st.push(9);
    // we want to insert an element in stack at any index
    cout<<"Enter Index number in which you want to  insert an elemet: ";
    int n;
    int x;
    cin>>n;
    cout<<"Enter Number you want to insert : ";
    cin>>x;
    insert(st,n,x);
    // cout<<s<<endl;
    cout<<st.size();

    
}