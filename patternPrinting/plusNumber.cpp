#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++){
        cout<<endl;
        for(int j=1;j<=(2*n-1);j++){
            if(i==3) cout<<j;
            else if(j==3) cout<<i;
            else cout<<" ";
        }
    }
}