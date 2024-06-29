#include<iostream>
#include<vector>
using namespace std;
bool check(float n){
    if(n==1.00) return true;
    if(n<1) return false;
    check(n/2.00);
    //return false;
}
int main(){
	int n;
    cout<<"Enter a number : ";
    cin>>n;
   cout<< check(n);
}