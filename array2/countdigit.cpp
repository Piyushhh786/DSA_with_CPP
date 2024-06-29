#include<iostream>
using namespace std;
int main(){
    int n = 1234;
    int count = 0;
    for(int i = 0 ; i <=n ; i++){
        if(n!=0) {
            n/=10;
            count++;
        }
    }
    cout<<count;
}