#include<iostream>
using namespace std;
int main(){
     int m,n;
    
    cout<<"Enter row no.";
    cin>>m;
    cout<<"Enter column no.";
    cin>>n;
    int arr[m][n];
    cout<<"Enter 1st array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    cout<<"Enter 2nd array";
    cout<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
     }
    int sum[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          sum[i][j]=arr[i][j]+brr[i][j];

        }
    }
    cout<<"sum array is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}