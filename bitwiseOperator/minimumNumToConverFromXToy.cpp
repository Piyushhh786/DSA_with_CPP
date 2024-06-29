#include<iostream>
using namespace std;
int set_bit(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n)&(n-1);
    }
    return count;
}
int minimum_Flip_To_get_y(int x,int y){
    int z;
    z=x ^ y;
    z=__builtin_popcount(z);
    return z;
}
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    cout<<minimum_Flip_To_get_y(x,y);
    
}