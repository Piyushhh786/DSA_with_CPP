#include<iostream>

using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=4;i++){
        for(int k=1;k<=(n-i+1);k++){
            cout<<" ";
        }
        for(int j=65;j<=(64+(2*i-1));j++){
            if(j==65) cout<<(char)j;
            else if(j==64+(2*i-1)) cout<<(char)(64+(2*i-1));
            else cout<<" ";
        }
        
        cout<<endl;
    }
    cout<<"ABCDEFGHI";
    
}