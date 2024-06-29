#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int power2(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return ((n+1)/2);
}
int main(){
    int n;
    cout<<"Enter a number to find lesser 2's power: ";
    cin>>n;

    //METHOD 1: SABSE BADIYA...
    // while(n>0){   //simply ye ek most sign 1 bit ko remove krte jyga
    //     int s= (n) & (n-1);
    //     if(s==0){
    //         break;
    //     }
    //     n=(n) & (n-1);
    // }
    // cout<<n;
    cout<<power2(n);
}