#include<iostream>
#include<vector>
using namespace std;
void removeOne(vector<int>ans,vector<int>&v,int idx){
    int n= v.size();
    if(idx==n){
        cout<<ans[0];
        return;
    }
    if(v[idx]!=1) ans.push_back(v[idx]);
    removeOne(ans,v,idx+1);

}
int main(){
    int arr[]={1,2,4,1,2,4,1,1,4};
    int n=sizeof(arr)/4;
    vector<int>v(arr,arr+n);
    vector<int>ans;
    removeOne(ans,v,0);
}