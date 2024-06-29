#include<iostream>
using namespace std;
int pow(int a,int n){
    //optimized way ....
    if(n==1) return a;
    int ans = pow(a,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*a;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
	cout<<pow(2,n);
}