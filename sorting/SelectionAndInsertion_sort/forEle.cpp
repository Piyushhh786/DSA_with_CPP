#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n =5;
    int arr[]={1,2,3,4,5};
    for(int ele : arr){//ele me arr ajynge ;
    //now ele have an access of arr;
        cout<<ele<<" ";
    }
}