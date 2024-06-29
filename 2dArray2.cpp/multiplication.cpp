#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row no. of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter column no. of 1st matrix : ";
    cin>>n;
    int p;
    cout<<"Enter row no. of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter column no. of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int b[p][q];
        int a[m][n];
        int c[m][q];
        cout<<"Enter matrix 1"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter matrix 2"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Multiplication of two given matrix is : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else
    cout<<"Multiplication is not possible for given matrix";
    
}