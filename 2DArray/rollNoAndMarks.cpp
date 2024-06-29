#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    for(int i=0;i<2;i++){
        if(i==0) cout<<"enter roll no.'s : ";
        else cout<<"enter marks : ";
        for(int j=0;j<4;j++){
             cin>>arr[i][j];
            
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            // if(i=0) cout<<"roll no.'s : ";
            // else cout<<"marks : ";
             cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}