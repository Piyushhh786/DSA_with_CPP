#include<iostream>
using namespace std;
int main(){
     int n ,l,a,b,sum;
     a=0;
    cout<<"Enter a number : ";
    cin>>n;
    b = n;
   for(;n!=0;){
    l=n%10;
    a+=l*l*l;
    n/=10;
   //  if(a==i) cout<<i;
   }
   if(a==b) cout<<"yes";
}