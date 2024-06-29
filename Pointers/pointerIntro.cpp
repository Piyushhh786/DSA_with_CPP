#include<iostream>
using namespace std;
int main(){
    int x;
    int* p =&x;
    float y;
    float* p1 =&y;
    cout<<&x<<endl<<p<<endl;//same
    cout<<&p<<endl;
    cout<<&y<<endl<<p1<<endl;
    
}