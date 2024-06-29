#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&arr1,int n,vector<int>&arr2,int m){
    int i=0;
    int j=0;
    int k=0;
    vector<int>v(m+n);
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            v[k]=arr2[j];
            j++;
            k++;
        }
        else {
            v[k]=arr1[i];
            i++;
            k++;
        }
    
    }
    if(i==n) //arr1 full so put arr2 ;
    {
        while(j<=m-1){
            v[k]=arr2[j];
        }
    }
    if(j==m) //arr1 full so put arr2 ;
    {
        while(i<=n-1){
            v[k]=arr2[i];
        }
}
    return v;
}
int main(){
    vector<int >arr1;
    arr1.push_back(2);
    arr1.push_back(4);
    arr1.push_back(7);
    int  m=arr1.size();
    vector<int>arr2;
    arr2.push_back(1);
    arr2.push_back(3);
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(10);
    int n=arr2.size();

    vector<int>v = merge(arr1,m,arr2,n);
    for(int i=0;i<m+n;i++){
        cout<<v[i]<<" ";
    }
}
