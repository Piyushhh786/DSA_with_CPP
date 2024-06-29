#include<iostream>
using namespace std;
int flip(int n){
    int x=n;
    n=(n)|(n>>1);
    n=(n)|(n>>2);
    n=(n)|(n>>4);
    n=(n)|(n>>8);
    n=(n)|(n>>16);
    //  10111
    //^ 11111 = 01000
    x=n^x;
    return x; 
}

int main(){
    int n=23;
    cout<<flip(n);
}