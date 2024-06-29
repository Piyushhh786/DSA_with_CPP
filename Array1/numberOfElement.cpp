#include<iostream>
using namespace std;
int main(){
    int n,x = 35,count =0;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"arr "<<i<<": ";
        cin>>arr[i];
    }
    for(int i =0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
   }

    

