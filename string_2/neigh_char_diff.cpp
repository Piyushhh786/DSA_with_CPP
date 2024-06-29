#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }
    }
    cout<<count;
}