#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1;
    for(int i =1;i<=n;i++){
        a*=i;
    }
    cout<<"Factorial of n is : "<<a;
}