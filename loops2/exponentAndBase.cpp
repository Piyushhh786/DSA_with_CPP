#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"Enter base : ";
   cin>>a;
   int b;
   cout<<"Enter exponent : ";
   cin>>b;
   bool flag = true;
   if(b<0){
     flag = false;
     b=-b;
   }
   float p=1;
   for(int i=1;i<=b;i++){
    p=a*p;
   }
   if(flag==false) {
    p=1/p;
    cout<<p;
   }
   else cout<<p;
   
}