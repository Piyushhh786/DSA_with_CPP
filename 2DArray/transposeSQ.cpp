#include<iostream>
using namespace std;
int main(){
    int m = 2;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter a "<<i<<j<<": ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m-i;j++){
        //  if(i<j)
        for(int k=0;k<i;k++)
               { int temp;
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}