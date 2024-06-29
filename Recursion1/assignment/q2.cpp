#include<iostream>
#include<vector>
using namespace std;
void palin(int n){
    // if(x>=n){
    //     cout<<n<<" ";
    //     return;
    // }
    // cout<<x<<" ";
    // palin(x+1,n);
    // cout<<x<<" ";
    if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    palin(n-1);
    cout<<n<<" ";
    
    
}
int main(){
	palin(4);
}