#include<iostream>
using namespace std;
int main(){
     int n ,b,sum;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 0;
    b=1;
    sum=0;
    cout<<1<<endl;
    for(int i = 1;i<=n-1;i++){
       sum = a +b ;
       cout<<sum<<endl;
       a=b;
       b=sum;
        
       
    }
}