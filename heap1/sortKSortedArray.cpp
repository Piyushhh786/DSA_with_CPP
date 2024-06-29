#include<iostream>
#include<queue>
using namespace std;
int main(){
    // int arr[] = {6,5,3,2,8,10,9};
    int arr[] = {10, 9 , 8 , 7 , 4 , 70 , 60 ,50};

    int n = sizeof(arr)/4;
    int x = -1;
    int k = 4;// any arr[i] should be atmost their 3 distance form either left
    // left or right .. we have to reaarange it to ascending order
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0 ; i < n ; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[i-k] = pq.top();
            pq.pop();
        }
    }
    x = pq.size();
    for(int i = x ; i> 0  ; i--){
        arr[n-i] = pq.top();
        pq.pop();
    }
    for(int i = 0 ; i< n ; i++) cout<<arr[i]<<" ";

}