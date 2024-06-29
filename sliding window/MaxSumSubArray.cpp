#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int k=3;
    int arr[]={1,4,4,2,6,2,8,3,9,1,2,6,8,4};
    int n=sizeof(arr)/4;
    int sum;
    int mx=INT_MIN;
    for(int i=0;i<=n-3;i++){
        sum=0;
    for(int j=i;j<i+k;j++){
        sum+=arr[j];
        mx=max(sum,mx);
    }
    }
    cout<<mx;
}