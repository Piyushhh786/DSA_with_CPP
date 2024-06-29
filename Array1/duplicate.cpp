#include<iostream>
using namespace std;
int  main(){
    bool flag = false;
    int arr[6]={1,2,2,3,3,5};
    for(int i = 0;i<=5;i++){
        for(int j=1+i;j<=5;j++){
            if(arr[i]==arr[j]) flag = true;
            break;
        }

    }
if(flag==1) cout<<"duplicate";
else cout<<"all are differnt";
}