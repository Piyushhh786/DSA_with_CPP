#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int k,prevSum=0;
    int currSum=0;
    cout<<"Enter size of Window: ";
    cin>>k;
    int mx=INT_MIN;
    int arr[]={2,4,1,5,2,5,7,1,9,3,8,3,1};//13
    int n=sizeof(arr)/4;
    int idx;
    for(int i=0;i<k;i++){
        currSum+=arr[i];
    }
    int i=0;
    int j=k;
    while(j<n){
        if(mx<currSum){
            mx=currSum;
            idx=i;
        }
        currSum+=arr[j]-arr[i];

        i++;
        j++;
    }
    cout<<mx<<" "<<idx;
}