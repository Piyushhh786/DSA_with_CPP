#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stockSpan(vector<int>& arr){
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n);
    ans[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=1;
        else ans[i]=i-st.top();
        st.push(i);
    }
    return ans;
}
int main(){
    //! problem
    //! given array:{100,80,60,70,60,75,85};
    //! output should be:{1,1,1,2,1,4,6};
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    v=stockSpan(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}