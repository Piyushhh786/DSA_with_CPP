#include<iostream>
#include<vector>
using namespace std;
void factupto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
}

int main(){
	factupto(5);
}