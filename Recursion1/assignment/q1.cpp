#include<iostream>
#include<vector>
using namespace std;
int sm(int a,int b,int sum){
    
    if(a>b) return sum ;
    if(a%2!=0)  sum+=a;
    sm(a+1,b,sum);
    
}
int main(){
//Write a program to calculate the sum of odd 
//numbers between a and b (both inclusive)using recursion.
    cout<<sm(3,9,0);
}