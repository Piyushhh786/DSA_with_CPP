#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int mx=0;
    int n,l;
    cout<<"enter no. of string: ";
    cin>>n;
    vector<string>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        l=v[i].size();
        mx=max(mx,l); 
    }
    cout<<mx;
    
    
}