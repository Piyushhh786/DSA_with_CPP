#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //slection sort is use full for less swaping
    //and initiall minimun;
    int n=5;
    int arr[]={3,4,1,5,2};
    int idx ;
    for(int i=0;i<n;i++){
        int min=arr[i];
    
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                idx = j;
            
            }
        }
        swap(arr[i],arr[idx]);
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}