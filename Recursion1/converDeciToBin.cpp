#include<iostream>
#include<string>
using namespace std;
string bin(int n,string s ){
    if(n==0) return s ;
    if(n%2==0) s+'0';
    else s+'1';
    bin(n/2,s);
    
}
int main(){
   cout<<bin(11,"");
}