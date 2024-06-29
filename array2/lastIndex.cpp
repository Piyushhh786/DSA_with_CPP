#include<vector>
#include<iostream>
using namespace std;
int main(){
    int lindx,x;
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    cout<<"enter a number x: ";
    cin>>x;
    // for(int i=v.size()-1;i>=0;i--){
    //     if(x==v.at(i)){
    //         cout<<i;
    //         break;
    //     }
    // }
     for(int i=0;i<v.size();i++){
    if(x==v.at(i)){
        lindx=i;
    }
     }
     cout<<lindx;

}