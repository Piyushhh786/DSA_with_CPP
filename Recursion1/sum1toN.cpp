#include<iostream>
using namespace std;
// int s(int sm,int n){
//     if(n==0) return sm;
//     s(sm+n,n-1);
// }
// void s(int sum,int n){//parameterised method
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     s(sum+n,n-1);
// }
int s(int n){
    if(n==0){
        return 0;
    }
    return n+s(n-1);
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;//n==3
	cout<<s(n);
}