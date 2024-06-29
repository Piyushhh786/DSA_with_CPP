#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int l;
    int j;
    int arr[] = {1,3,5,2,4};
    // for(int i=1;i<n;i++){
    //     l=i;
    //     for(int j=i-1;j>=0;j--){
    //         if(arr[j]>arr[l]){
    //             swap(arr[j],arr[l]);
                
    //         }
    //         else break;
    //         l--;
    //     }
    // }
    for(int i=1;i<n;i++){
        j=i;
        while(j>=1){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }
            else break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
         }   

}