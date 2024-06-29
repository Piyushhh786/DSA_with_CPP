#include<iostream>
#include<vector>
using namespace std;
int main(){//all are distinct element
    int arr[]={0,1,2,3,4,5,6,7,8,12};
    int n= sizeof(arr)/4;
    int mid,high=n-1;
    int low = 0;
    while(low<=high){
        mid=(low+high)/2;
        if(mid<arr[mid]) high =mid-1;
        else  low=mid+1;
    }
    cout<<arr[high]+1;
}