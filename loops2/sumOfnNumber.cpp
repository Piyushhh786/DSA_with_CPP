#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int c;
    int s=0;
    while(n>0){
        c=n%10;
        n/=10;
        s+=c;
        
    }
    cout<<s;

}