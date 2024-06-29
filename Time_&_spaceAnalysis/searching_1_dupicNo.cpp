#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //by mathematics
    int arr[]={1,2,3,4,5,2};
    int sum=0;
    int x;
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    x= sum - (n-1)*n/2;
    cout<<x;
    //mmethod 2
    // int arr[]={1,2,3,4,5,2};
    // int n=(sizeof(arr))/4;
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     if(v[(arr[i]-1)]==0) v[(arr[i]-1)]=arr[i];
    //     else if(v[(arr[i]-1)]==arr[i]){ cout<<arr[i];
    //     break;}
    // }
    //by vector
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(2);
    // sort(v.begin(),v.end());
    // for(int i=1;i<6;i++){
    //     if(v[i-1]==v[i]){ cout<<"duplicate is : "<<v[i];
    //     break;
    //     }

    // }
    //brute force method
    // int arr[]={1,2,3,4,5,2};
    // for(int i=0;i<6;i++){
    //     for(int j=i+1;j<6;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<"duplicate is : "<<arr[i];
    //         }
    //     }
    
}