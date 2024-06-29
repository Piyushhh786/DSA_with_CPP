#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i,a = n;
    for( i=1;i<=2*n - 1;i++){
       if(i<=n){
        for(int j=1;j<=i;j++)
        cout<<"*";
       }
       else{
        for(int j=1;j<=2*n-(i);j++)
        cout<<"*";
       }
        cout<<endl;
    }
}