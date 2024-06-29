#include<iostream>
#include<vector>
using namespace std;
int my_func(int);
int main(){
        int n=5;
        n=my_func(n=my_func(n=my_func(n)));
        cout<<n;
}
int my_func(int m){
    m++; return m;
}