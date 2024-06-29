#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(4));
                    //  (row,vctor<int>v(colu));
    //if you want to print row thenn use
    cout<<v.size()<<endl;
    //if you want to print column then use
    cout<<v[0].size();
}