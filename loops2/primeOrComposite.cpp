#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n ;
    bool flag = true;//prime
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;//composite
             break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite  number";
    else if(flag == false) cout<<"composite";
        else cout<<"prime";
}