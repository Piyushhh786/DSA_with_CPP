#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
int main(){
    string s="jaimin is a good boy as math math math well as he is good looking ";
    stringstream ss(s);
    vector<string>v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    // sort the vector;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int mx=0;
    int count=1;
    for(int i=1;i<v.size();i++){
        
        if(v[i-1]==v[i]) count++;
        else count=1;
        if(mx<count) mx=count;
    }
    cout<<mx;
}