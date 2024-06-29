#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> previousGreatestElement(vector<int>& arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    ans[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0)ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    int arr[]={2,5,1,5,3,2,4,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);//copy the element of array in vector
    v=previousGreatestElement(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}