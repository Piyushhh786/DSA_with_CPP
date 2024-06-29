#include<iostream>
using namespace std;
int main(){
    int m,n;
    int sum =0;
    cout<<"Enter row no.";
    cin>>m;
    cout<<"Enter column no.";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter arr"<<i<<j<<": ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          sum+=arr[i][j];

        }
    }
    cout<<sum;
}
    

