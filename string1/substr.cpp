#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n =s.size();
    cout<<s.substr(n/2);
    cout<<endl<<s.substr(2,4);//s.substr(idx,length)
    //output:Piyush palariya
    //palariya
    //yush
}