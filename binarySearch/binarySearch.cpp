#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6,7,8,9,12,65};
    int n = sizeof(arr)/4;
    int target = 9;
    //?linear search
    // int i = 0;
    // bool flag = false;
    // while(i<n){
    //     if(arr[i]==9) {
    //         flag = true;
    //         break;
    //     }
    //     else i++;
    // }
    // if(flag) cout<<"yes it is present in index: "<<i<<endl;
    // else cout<<"It is not present in your given array..."<<endl;
    //? binary search
    int lo = 0;
    int hi = n-1;
    while(lo<hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
    if(arr[hi]==target) cout<<"yes it is present in index: "<<hi<<endl;
    else cout<<"it is not presnt in our array";

}