#include<iostream>
using namespace std;
int main(){
     int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a >= b && b > c){
        cout<<"1st number is greatest number";
    }
    if(b >= a && a >= c){
        cout<<"2nd number is greatest number";
    }
    if(c >= a && c>= b){
        cout<<"3rd number is greatest number";
    }
}