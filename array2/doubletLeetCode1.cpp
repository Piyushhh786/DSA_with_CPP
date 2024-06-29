#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    int x=7;
    bool flag=true;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();i++){
            if((v[i]+v[j])==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            else flag = false;
        }
    }
            if(flag==false) 
            cout<<"no pairs are there whose sum is equal to x ";
}