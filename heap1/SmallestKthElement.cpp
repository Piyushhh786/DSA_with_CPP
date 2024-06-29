#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;//maxheap
    priority_queue<int , vector<int> , greater<int>>minheap;
    //? the time complexity required for insert 0(log n) where n is the 
    //? current size of pq
    int arr[]= {2,4,1,5,5,3,7,9};
    int n = sizeof(arr)/4;
    int k = 3;
    //* finding the 3rd smallest no. by pq
    //* it can also be done by quick select algo with O(n)avg , sorting O(nlogn)
    //* , selectionSort O(n*k) and priority queue
    for(int i = 0 ; i<n ; i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();


}