#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(9);//front
    q.push(4);
    q.push(5);
    q.push(5);//rear or back
    cout<<q.front()<<endl;
    cout<<q.back()<<endl; // it gives last value 
    q.pop();// first element will remove form queue
    cout<<q.front()<<" ";
    cout<<endl<<q.size()<<" "<<q.empty();
    
}