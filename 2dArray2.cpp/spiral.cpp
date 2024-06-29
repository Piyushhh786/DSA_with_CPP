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
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
         maxc--;
         if(minr>maxr || minc>maxc) break;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }

}