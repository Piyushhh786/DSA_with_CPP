#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,2,2,2,3,3,3,3,3,3,4,4,5,5,6,6,6,6};
    int n=sizeof(arr)/4;
    int idx,target =3;
    int low=0,high=n-1,mid;
    bool flag = false;
    while(low<=high){
        mid=(low + high)/2;
        if(arr[mid]==target){
            idx=mid;
            flag = true;
            break;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }    if(flag==true){
    while(arr[idx]==3){
        idx--;
    }
    cout<<idx+1<<" "<<arr[idx+1];}
    else cout<<"The given number is not in array";
}