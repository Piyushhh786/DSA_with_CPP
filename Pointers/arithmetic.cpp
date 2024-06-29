#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int* ptr = &a;
    cout<<ptr<<endl;
    ptr=ptr+2;
    // cout<<*ptr;//6422284 pata nhi kya hai
    cout<<ptr;
}