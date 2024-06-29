#include<iostream>
using namespace std;
int main(){
    // bool p = true;
    // bool q = true;
    // bool r = false;
    // cout<<(p==q==r);//left to right code solve kro

    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r)<<endl;//(p==q)==r.
    cout<<(p==(q==r));// "BODMAS"
}