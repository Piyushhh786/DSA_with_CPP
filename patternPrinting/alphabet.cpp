#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i = 0; i<=n;i++){
        for(int j = 65; j<=68;j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}