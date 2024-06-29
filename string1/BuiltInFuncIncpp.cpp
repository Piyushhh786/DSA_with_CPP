#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdef";
    // reverse 
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    //reverse part by part
    reverse(str.begin()+2,str.end()-1);
    cout<<str<<endl;
    // + operator in str
    string s ="abc";
    // s-="c"; only + operator work;
    s+=str;
    cout<<s<<endl;

}