#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    cout<<arr[0];
    change(arr);
    cout<<arr[0];
}
void change(int arr[] ){
    arr[0] = 9;
}