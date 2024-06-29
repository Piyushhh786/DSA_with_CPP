#include<iostream>
#include<vector>
using namespace std;

void partitionPivot(vector<int>&v , int start , int end){
    if(start >= end) return;
    int x = start+1;
    int count =0;
    while(x<=end){
        if(v[x]<v[start]) count++;
        x++;
    }
    // cout<<x;
    //? swap start+count index and start...
    swap(v[start+count] , v[start]);
    //!partition.....
    x = start + count;
    int i = start;
    int j = end;
    // int idx = start+count;
    while(i<x && j>x){
        if(v[i]>v[x] && v[j]<v[x]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]<v[x]) i++;
        if(v[j]>v[x]) j--;
    }
    partitionPivot(v , start , x-1);
    partitionPivot(v , x+1 , end);
}
void display(vector<int>v){
    int n = v.size();
    for(int i = 0 ; i<n ;i++) cout<<v[i]<<" ";
}
int main(){
    int arr[]= {4,3,5,6,1,7,2,9};
    int n;
    n = sizeof(arr)/4;
    vector<int>v(arr,arr + n);
    // cout<<-1;
    partitionPivot(v,0,n-1);
    display(v);
    
}