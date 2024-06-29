#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int x;
    for (int i=1;i<=2*n-1;i++){
            cout<<endl;
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            int b=j;
            if(a>n) a=2*n-i;
             if(b>n) b=2*n-j;
            x=min(a,b);
             cout<<x;
             
        }
    }
}