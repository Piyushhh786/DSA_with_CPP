#include<iostream>
using namespace std;
int main (){
    int n,max;
    int arr[n];
    cout<<"Enter size  of array : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter arr "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }
    max = arr[0];
    for(int i =1;i<n;i++){
        if(max <=arr[i]) max = arr[i];
    
    }
    cout<<max;
}