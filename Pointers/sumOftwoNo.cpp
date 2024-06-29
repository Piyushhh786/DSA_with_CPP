#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int y = 8;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter frst number : ";
    cin>>x;
    cout<<"Enter scnd number :  ";
    cin>>y;
    cout<<"sum of two number : "<<*p1 + *p2;

}