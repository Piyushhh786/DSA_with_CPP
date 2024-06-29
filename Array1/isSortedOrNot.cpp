#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,7,6,8,9};
    int n = 5;
    bool flag = true;
    for(int i = 0 ; i < n-2 ;){
        for(int j = i+1 ; j<= n-1 ; j++){
            if(arr[i]>arr[j]){
                flag = false;
                break;
            }
            i++;
        }
        if(flag == false ) break;
    }
    cout<<flag;
}