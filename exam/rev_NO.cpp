#include<iostream>
using namespace std;
int main(){
    int n = 567;
    int rev = 0;
    int rem  =0;
    while(n!= 0 ){
        rem = n%10;
        rev*=10+rem;
        n/=10;
    }
}