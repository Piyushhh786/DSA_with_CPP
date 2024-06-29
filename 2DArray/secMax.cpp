#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max =INT_MIN;
    int smax;
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"enter arr"<<i<<j<<": ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(max<arr[i][j]){
            smax=max;
             max =arr[i][j];

        }
    }
}
    cout<<smax;

}