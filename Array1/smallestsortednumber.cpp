#include<iostream>
using namespace std;
int main(){
    // int arr[5]={1,2,3,45,65};
    // int n = 4;
    // for(int i=0;i<=n;i++){
    //     if(arr[i]!=(i+1)) {
    //         cout<<i+1;
    //         break;
    //     }
       
    // }
    // if negative numbers are also sorted;
    int arr[]={-4,-3,-1,0,1,2,3,4,5};
    int x=1;
    int n=sizeof(arr)/4;
    bool flag = true;
    for(int i=0;i<=n;i++){
        if(arr[i]<=0) continue;
        if(x!=arr[i]){
            cout<<x;
            flag = false;
            break;
        }
        else x++;
    }
    if(flag ==1) cout<<"no missing element";
}