#include<iostream>
using namespace std;
void display(int arr[],int n ){
    if(n==-1) return;
    display(arr,n-1);
    cout<<arr[n]<<" ";
}
int main(){
    int arr[]={0,2,5,4,5};
    int n= sizeof(arr)/4;
    display(arr,n-1);
}