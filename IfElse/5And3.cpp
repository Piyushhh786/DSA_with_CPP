#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<" Number is divisible by both 5 and 3"<<endl;
    }
    else{
        cout<<" Number is not divisible by both 5 and 3"<<endl;
    }
    if (n%15==0){
        cout<<" Number is divisible by both 5 and 3"<<endl;
    
    }
    else{
        cout<<" Number is not divisible by both 5 and 3";
    }
}