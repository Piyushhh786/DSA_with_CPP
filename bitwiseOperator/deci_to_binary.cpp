#include<iostream>
#include<vector>
#include<string>
using namespace std;
void dec(int n,string & s ){
    if(n==0) return ;
    dec(n/2,s);
    s+=to_string(n%2);
}
int main(){
    string s="";
	dec(6,s);
    cout<<s;
}