#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> & q){
    int n = q.size();
    for(int i =1;i<=n ;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int>q;
    stack<int>st;
    int k = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int n = q.size();
    for(int i = 1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i = 1;i<=k;i++){
       q.push(st.top());
       st.pop();
    }
    for(int i = k+1;i<=n;i++){
        st.push(q.front());
        q.pop();
        q.push(st.top());
        st.pop();
    }
    display(q);
    
}