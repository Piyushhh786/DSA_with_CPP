#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==0) return 1;
    return a*power(a,n-1);
}
int main(){
	int n,a;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power number : ";
    cin>>n;
    cout<<power(a,n);
}