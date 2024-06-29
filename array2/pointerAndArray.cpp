#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,6};
    int* ptr = arr;//0x61fef8
    // int* ptr = &arr;//error
    // int* ptr = &arr[0];//0x61fef8
    // cout<<ptr<<endl;
    // ptr[0]=8;//pointer have full power to access array;
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // } 
    *ptr = 8;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}