#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            v[i][j]=j;
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}