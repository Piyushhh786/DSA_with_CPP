#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i = 0; i<=n;i++){
        for(int j = 1; j<=(i*2-1);j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}