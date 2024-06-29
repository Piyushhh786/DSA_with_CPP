#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextGreatestElement(vector<int>& arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
       while(st.size()>0 && st.top()<=arr[i]) st.pop();
       if(st.size()==0) ans[i]=-1;
       else ans[i]=st.top();
       st.push(arr[i]);
    }
    return ans;
    //  int n = nums.size();
    //     stack<int>st;
    //     vector<int>ngi(n);
    //     st.push(n-1);
    //     ngi[n-1] = n;
    //     for(int i = n-2;i>=0;i--){
    //         while(st.size()!=0 && nums[st.top()]<=nums[i]) st.pop();
    //         if(st.size()==0) ngi[i]=-1;
    //         else {
    //             ngi[i] = st.top();
    //         }
    //         st.push(i);
    //     }
}
int main(){
    int arr[]={2,5,1,5,3,2,4,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);//copy the element of array in vector
    v=nextGreatestElement(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    ///correct way of doing this question;;

}