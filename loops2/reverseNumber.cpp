#include<iostream>
using namespace std;
int main(){
    int n;
    int r = 0;
    int l = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        r*=10;
        l=n%10;
        r+=l;
        n=n/10;  
}
cout<<r;
}