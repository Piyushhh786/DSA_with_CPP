#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}
int comb(int n,int r){
    int a=fact(n)/(fact(n-r)*fact(r));
    return a;
}
int main(){
    int m;
    cout<<"Enter row : ";
    cin>>m;
    vector<vector<int>>v(m,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            v[i][j]=comb(i,j);
        }
    }
for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}