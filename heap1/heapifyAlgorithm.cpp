#include<iostream>
#include<queue>
using namespace std;
void heapify(int arr[] , int n , int idx){
    //! go and see its child
    // rearrangement of maxheap
    int i = idx;
    while(true){
        int left = 2*i , right = left +1;
        if(left>n) break;
        if(right>n && left == n){
            if(arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                break;
            }
            else break;
        } 
        if(arr[left]>arr[right]){
            if(arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }
            else break;
        }
        else{
            if(arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i = right;
            }
            else break;
        }
    }
}
void display(int arr[], int n){
    for(int i = 1 ; i< n ; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    // in this we have given an array now convert it into minheap or maxheap
    int arr[] = {-1,2,5,5,1,6,4,8};// converting this in heap
    //!step 1: donot molest with leaf nodes...
    //! No. of leaf Nodes = n/2 if size even or in case of odd it is n/2+1
    //! start with i = n/2;
    int n = sizeof(arr)/4 -1;
    for(int i = n/2 ; i>=1 ; i-- ){
        heapify(arr,n,i);
    }
    display(arr,n+1);





}