#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string s = "abcde";
    // int n=s.size();
    // // if(n%2!=0) n+=1;
    // // reverse(s.begin(),s.end()-(n/2));
    // // cout<<s<<endl;
    // reverse(s.begin(),s.begin()+(n/2));
    // cout<<s;
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    int n=s.size();
    reverse(s.begin(),s.begin()+(n/2));
    cout<<s;
}