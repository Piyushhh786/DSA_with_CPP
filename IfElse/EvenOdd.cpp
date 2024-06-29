#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%2==0){  //if this condition is true then it
    //is stop there . If this condition is false then 
    //they read further.
        cout<<"Number is even ";

    }
    if(n%2!=0){
        cout<<"Number is odd ";
    }
}