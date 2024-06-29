#include<iostream>
#include<vector>
using namespace std;
int main(){//imp
    int arr[]={1,2,2,2,2,3,3,3,3,3,3,4,4,5,5,6,6,6,6};
    int n=sizeof(arr)/4;
    int idx,target =1;
    int low=0,high=n-1,mid;
    bool flag = false;
    while(low<=high){
        mid=(low + high)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target)
            {flag = true;
            break;}
            else high=mid-1;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }   
    cout<<mid;
}