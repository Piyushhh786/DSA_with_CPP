#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0;i<=6;i++){
        cout<<"arr "<<i<<" : ";
        cin>>arr[i];//input using loops
    }
    //output using loops;
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}