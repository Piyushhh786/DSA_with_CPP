#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i =1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    return nfact/(rfact*nrfact);
}
int main(){
    int n , r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    if(n>=r)
    cout<<combination(n,r);
    else cout<<"error";5
}