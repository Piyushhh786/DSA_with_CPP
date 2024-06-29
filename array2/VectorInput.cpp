#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter size of vector";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter vector "<<i<<": ";
        cin>>x;
        v.push_back(x);
        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
        5
        
    }
    for(int i=0;i<=n-1;i++){
    cout<<v[i]<<" ";
    }
}