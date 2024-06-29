#include<iostream>
using namespace std;
template<typename t>
class queue{
private:
    t arr[5];
    int b;//--->last
    int f;//--->0
public:
    queue(){
        b = 0;
        f = 0;
    }
    void push(t val){
        if(b==5) {cout<<"\nerror: overflow!!";
        return ;}
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b-f == 0){
            cout<<"error: underflow!!";
            return ;
        }
        f++;
    }
    t front(){
        if(b-f == 0) return -1;
        return arr[f];
    }
    t back(){
        if(b-f == 0) return-1;
        return arr[b-1];
    }
    int size(){
        return b-f;
    }

};
int main(){
    queue<int>q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(6);
    q.push(10);
    q.pop();
    q.pop();
    cout<<q.back()<<" "<<q.front();
    q.push(4);// its size is 5 but it still dont store 4.....wrost thing in arr implementation
    //wastage of storage it can be solved by circular array
    cout<<" "<<q.back();
}