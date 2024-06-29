#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b,vector<int>&res){
    int i=0;//for a
    int j=0;// for b
    int k =0;
   while(i<a.size() && j<b.size()){
    if(a[i]<b[j]){
        res[k]=a[i];
        i++;
        k++;
    }
    else {
        res[k]=b[j];
        k++;
        j++;
    }
   }
   if(j==b.size()){
    for(i;i<a.size();i++){
        res[k]=a[i];
        k++;
    }
   }
    if(i==a.size()){
    for(j;j<b.size();j++){
        res[k]=b[j];
        k++;
    }
   }
   
   
}
void mergeSort(vector<int>&arr){
    int n=arr.size();
    if(arr.size()==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=arr[i];
    for(int i=0;i<n2;i++) b[i]=arr[n1+i];
    mergeSort(a);
    mergeSort(b);
    merge(a,b,arr);
    
}
int main(){
	int a[]={1,7,5,7,8};
    int n1=sizeof(a)/sizeof(a[0]);
    vector<int>arr(a,a+n1); ///full acess
    // for(int i=0;i<n1;i++) cout<<arr[i]<<" ";
    // vector<int>b;
    // b.push_back(2);
    // b.push_back(5);
    // b.push_back(7);
    // cout<<n1<<" "<<b.size();
    // vector<int>res(n1+b.size());
    mergeSort(arr);
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";


}
