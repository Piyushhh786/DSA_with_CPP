#include<iostream>
using namespace std;

int main(){
    int num1;
    int p = 5 , q = 10;
    p += q -= p;//first (q =- p)->q = 5 now (p += q)-> p = 10
    cout<<"p = "<<p<<endl<<"q = "<<q;




}