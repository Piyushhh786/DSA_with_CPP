#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // a=1;
        for(int j=1;j<=(n)-i;j++){
           cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
            // a++;
        }
        cout<<endl;

    }
}