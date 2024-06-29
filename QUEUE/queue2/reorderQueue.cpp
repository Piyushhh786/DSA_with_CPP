#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    int i =1;
    while(i<=n){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        i++;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/4;
    queue<int>q;
    stack<int>st;
    for(int i =0 ;i<n;i++){
        if(i<n/2)st.push(arr[i]);
        else q.push(arr[i]);
    }
    // q... 5,6,7,8
    //st... 1,2,3,4
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    // q...5,6,7,8,4,3,2,1
    // st = 0 
    for(int i =0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    //q...4,3,2,1,5,6,7,8
    for(int i = 0 ;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //q... 5,6,7,8
    // st.. 4,3,2,1..... 1 at top..
    //! now real game strt
    int x = q.front();
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    display(q);
}