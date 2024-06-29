#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n= sizeof(arr)/4;
    int target =12;
    int high = n-1;
    int low=0;
    int mid;
    while(high>=low){
        mid = (low+high)/2;
        if(arr[mid]<target) low=mid+1;
        else if(arr[mid]>target) high=mid-1;
    }
    // if(low == high) high =high-1;
    cout<<arr[high];
}