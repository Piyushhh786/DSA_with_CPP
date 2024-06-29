#include<iostream>
using namespace std;

int main(){
    //take float input and print the fractional part of the
    //real number.
    float a;
    cout<<"a: ";
    cin>>a;
    int b = (int)a;
    if(b<0) b = b - 1;
    float c = (float)b;
    a = a - c;
    cout<<a;




}