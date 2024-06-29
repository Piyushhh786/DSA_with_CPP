#include<iostream>
using namespace std;
int main(){
    int n;
    int* x = NULL;
    cout<<x<<" ";
    cout<<&x<<" ";//0x61ff0c
    int* p = '\0';
    cout<<p<<" ";
    cout<<&p;
}