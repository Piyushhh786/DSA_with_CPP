#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(int arr[3][3]){//mention size also....
    arr[1][2]=0;
}
void chgvec(int m,int n,vector<vector<int>>&v){
    v[0][1]=0;
    v[1][1]=0;
    v[0][0]=0;
    v[2][2]=0;
}
int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<arr[1][2]<<endl;
    change(arr);
    cout<<arr[1][2];
    cout<<endl;
    vector<vector<int>>v(3,vector<int>(3));
    int m=v.size();
    int n=v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter v"<<i<<j<<": ";
            cin>>v[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    chgvec(m,n,v);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }




}