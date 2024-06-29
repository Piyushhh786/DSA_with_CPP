#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
// void mx(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max= arr[idx];
//     mx(arr,n,idx+1,max);
// }
int mx(int arr[],int n,int idx){
    if(idx==n){
        return INT_MIN;
    }
    return max(arr[idx],mx(arr,n,idx+1));

}
int main(){
    int arr[]={2,5,3,6,65,6,8};
    int n = sizeof(arr)/4;
    cout<<mx(arr,n,0);
}