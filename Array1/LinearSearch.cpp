#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    int x = 34;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter arr "<<i<<" : ";
        cin>>arr[i];
    }
    bool flag = true;
    for(int i =0;i<n;i++){
        if(arr[i]==x){ 
            flag = false;
        }
    }
        if(flag==1) cout<<"No match found";
        else cout<<"match";
       
    
}