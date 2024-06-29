#include<iostream>
using namespace std;
int main(){
     int m;
    cout<<"Enter row no. of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter column no. of 1st matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter matrix 1"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
    for(int i=0;i<m;i++){
        for(int k=0,j=n-1;k<j;j--,k++){
            if(i%2!=0){
                int temp;
                temp=a[i][k];
                a[i][k]=a[i][j];
                a[i][j]=temp;
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