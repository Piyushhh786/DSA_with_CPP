#include<iostream>
using namespace std;
int dgt(int x){
    // int h =x;
    int count =0;
    for(int i=1;x>0;i++){
        x=x/10;
        count++;
    }
    return count;
    
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<dgt(x)<<endl;
    cout<<x*x;
}