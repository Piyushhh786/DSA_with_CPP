#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(9);
    v.push_back(9);
    v.push_back(8);
    v.push_back(9);
    v.push_back(9);
    v.push_back(8);
    v.push_back(9);
    v.pop_back();

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}