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
    if(n>=r){
    return nfact/(rfact*nrfact);}
    else return 0;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
    }
}