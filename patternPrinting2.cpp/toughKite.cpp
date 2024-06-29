#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
   for(int i=1;i<=2*n-1;i++){
    cout<<endl;
    if(i<=n){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        
    }
    else{
            for(int j=1;j<=i-n;j++){
                cout<<" ";
            }
            for(int k=1;k<=4*n-2*i-1;k++){
                cout<<"*";
            }
        }
   }

}