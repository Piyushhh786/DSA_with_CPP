#include<iostream>
using namespace std;
class circularQue{
    int arr[5];
    int s;
    int f;
    int b;
public:
    circularQue(){
        s = 0;
        f = b = 0;
    }
    void push(int val){
        if(s==5){
            cout<<endl<<"error: size excceded!!!"<<endl;
            return;
        }
        if(b<5){
            arr[b]=val;
            b++;
        }
        else{
            b=b%5;
            arr[b]=val;
            b++;
        }
        s++;
    }
    void pop(){
        f++;
        s--;
    }
    int front(){
        return arr[f];
    }
    int back(){
        return arr[b-1];
    }
    int size(){
        return s;
    }
};
int main(){
    circularQue cq;
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.pop();
    cq.push(6);
    cout<<cq.front()<<" "<<cq.back();    
    cq.push(-8);
    cout<<cq.front();
}