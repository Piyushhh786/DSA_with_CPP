#include<iostream>
using namespace std;
//code is not so clear
float combination(int n, int r){
    int d = n-r;
    int nfact =1;
    int rfact=1;
    int nrfact=1;
    for(int i = 1;i<=n;i++){
        nfact*=i;
    }
    for(int i =1;i<=r;i++){
        rfact*=i;
    }
    for(int i=1;i<=d;i++){
        nrfact*=i;
    }
    return nfact/(rfact*nrfact);
}
int main(){
    cout<<combination(4,2);

}