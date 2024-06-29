#include<iostream>
using namespace std;
void display(int* a,int size){
    for(int i=0;i<=size -1;i++){
        cout<<a[i]<<" ";
    }
}
void change(int b[]){
    b[0]=3;
}
int main(){
    int arr[]={1,3,4,5};
    int size = sizeof(arr)/4;
    display(arr,size);//in place of arr=&arr[0]
    change(arr);
    cout<<endl;
    display(arr,size);
}