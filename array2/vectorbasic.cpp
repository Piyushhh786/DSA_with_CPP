#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    cout<<v.size();
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    
}