#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,4,6,2,6,9};
    int n=sizeof(arr)/4;
    vector<int>preSum;
    int sum=0;
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        preSum.push_back(sum);
    }
    for(int ele:preSum){
        cout<<ele<<" ";
    }
}