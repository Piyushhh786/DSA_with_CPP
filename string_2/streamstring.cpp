#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="piyush is good boy";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}