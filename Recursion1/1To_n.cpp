#include<iostream>
using namespace std;
void printupto(int n){
    if(n==0) return ;
    cout<<n<<" ";
    printupto(n-1);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    printupto(n);
}