#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows : ";
    cin>>m;
    cout<<"Enter no. of column : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // int b[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         b[i][j]=a[j][i];
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}