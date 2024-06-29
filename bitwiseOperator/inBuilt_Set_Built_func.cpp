#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int set_bit_of(int n){
//     return __builtin_popcount(n);
// }
//what is inside the inbuit function of 
//__builtin_popcount();
int builtin_popcount(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & n-1); //after last set bit of n it will flip
    }
    return count;
}
int main(){
    int n=5;
    // cout<<set_bit_of(n);
    cout<<builtin_popcount(n);
    //explanation
    //   101=5;
    // & 100=4;
    //   100  last set bit of 5 gayab...
}