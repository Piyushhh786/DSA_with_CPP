#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number : ";
    cin>>x;
    // if(x%2==0) cout<<"even";
    // else cout<<"odd";
    //condition? true : false......ternary
    x%2==0? cout<<"even" : cout<<"odd";


}