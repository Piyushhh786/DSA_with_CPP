#include<iostream>
using namespace std;
int hcf(int a,int b){
    int h =1;
    int mini=min(a,b);
    for(int i =1;i<=mini;i++){
        if(a%i==0 && b%i==0){
            h=i;
        } 
    }
    return h;
}
int main(){
    int a,b;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"gcd of 1st and 2nd number : "<<hcf(a,b);
}