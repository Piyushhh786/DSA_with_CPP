#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter row of matrix : ";
    cin>>m;
    cout<<"Enter column of matrix : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0,k=m-1;i<k;i++,k--){
        for(int j=0;j<m;j++){
            int temp = a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=temp;
        }
    }
    for(int i=0;i<m;i++){
        if(i%2!=0){
        for(int j=0,k=n-1;j<k;k--,j++){
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp; 
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}