#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int popcount_setbit(int n){
    int count=0;
    for(;n!=0;n=n>>1){s==
        if(n%2==1) count++;
    }
    return count;

}
int main(){
    int n;
    cout<<"Enter a number for finding set bit: ";
    cin>>n;
    cout<<popcount_setbit(n);
}