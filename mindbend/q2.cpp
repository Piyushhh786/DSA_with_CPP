#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = false;
    int sum =0;
    for(int i =1;i<=n;i++){
        sum+=i;
        if(sum==n){
            cout<<"YES";
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"NO";
}