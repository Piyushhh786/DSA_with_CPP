#include<iostream>
using namespace std;
void odd(int a, int b){
    if(a>b) odd(b,a);
    for(int i= a;i<b;i++){
        if(i%2!=0) cout<<i<<endl;
       
    }
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    odd(a,b);
}