#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter row: ";
    cin>>m;
    vector<vector<int>>v(m,vector<int>(m));
     
    for(int i=0;i<=m;i++){
        int k=i-1;
        for(int j=0;j<=i;j++){
            int l=j-1;
           if(j==0) v[i][j]=1;
           else {
            v[i][j]=((i-j)/(j+1))*v[k][l];
           }
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}