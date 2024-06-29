#include<iostream>
#include<string>
using namespace std;
int binToDec(string &s ){
    int n=s.size();
    int nums;
    int result=0;
    for(int i=n-1;i>=0;i--){
        nums=s[i]-'0';
        result+=nums*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string s ="0110";
    cout<<binToDec(s);
}