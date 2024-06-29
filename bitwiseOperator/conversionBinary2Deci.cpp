#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ="0110";
    int dec=0;
    int n = sizeof(s)/4; 
    int x=1;
    for(int i=n-1;i>=0;i--){
        dec+=(s[i]-'0')*x;
        x*=2;
    }
    cout<<dec;
}