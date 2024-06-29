#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(9);
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    //removeble the last vector
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v[2]<<" "<<v[1]<<" "<<v[0]<<endl;
    cout<<v.size()<<endl;
}