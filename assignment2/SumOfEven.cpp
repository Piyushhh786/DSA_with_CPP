#include<iostream>
using namespace std;
int main(){
    int n , c, sum = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
    c=n%10;
    n=n/10;

    if(c%2==0){
        sum+=c;
    }
    }
    cout<<"sum of all even digit is : "<<sum;
}