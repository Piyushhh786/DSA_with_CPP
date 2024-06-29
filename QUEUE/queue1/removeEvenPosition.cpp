#include<iostream>
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
void removeEven(queue<int>&q){
    int s = q.size();
    for(int i =0;i<s;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
}
int main(){
    queue<int>q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(6);
    cout<<"before deleting : ";
    display(q);
    removeEven(q);
    cout<<endl<<"After deleting : ";
    display(q);
}