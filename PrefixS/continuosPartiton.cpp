#include<iostream>
#include<vector>
using namespace std;
int main(){
    int flag=false;
	int arr[]={2,3,4,5,1,6,7,2,7,6};
    int n= sizeof(arr)/4;
    vector<int>preSum(n),sufSum(n);
    preSum[0]=arr[0];
    for(int i=1;i<n;i++){
        preSum[i]=preSum[i-1]+arr[i];
    }
    sufSum[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        sufSum[i]=sufSum[i+1]+arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(preSum[i]==sufSum[i+1]) {flag=true;
        break;
        }
    }
    cout<<flag;


}