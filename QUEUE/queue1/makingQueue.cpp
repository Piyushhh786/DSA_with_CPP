#include<iostream>
using namespace std;
template<typename T>
class queue{
private:
    T* arr;
    int s;
public:
    //constructor
    queue(){
        arr= new T[0];
        s=0;
    }
    //destructor
    ~queue(){
        delete(arr);
    }
    //push
    void push(T val){
        arr[s]=val;
        s++;
    }
    void pop(){
        if(s==0) cout<<"Error: size is already empty";
        else {
            removeFirst();
            s--;
        }
    }
    T front(){
        return arr[0];
    }
    T back(){
        return arr[s-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
};
int main(){
    queue<int>q;
    q.push(9);//front
    q.push(4);
    q.push(5);
    q.push(5);//rear or back
    cout<<q.front()<<endl;
    cout<<q.back()<<endl; // it gives last value 
    q.pop();// first element will remove form queue
    // q.pop();
    cout<<q.front()<<" ";
    cout<<endl<<q.size()<<" "<<q.empty();
// 9
// 5
// 9
// 3 0
}