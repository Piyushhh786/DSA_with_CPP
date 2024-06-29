#include<iostream>
#include<vector>
using namespace std;
void subStr(vector<int> ans,vector<int>& v,int idx,int n){
    if(idx==n){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
        return;
    }
    
    subStr(ans,v,idx+1,n);
    ans.push_back(v[idx]);
    subStr(ans,v,idx+1,n);
}
int main(){
	vector<int>v,ans;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    int n= v.size();
    subStr(ans,v,0,3);
    
}