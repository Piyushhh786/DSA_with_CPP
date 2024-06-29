#include<iostream>
using namespace std;
void frstlst(int n, int* ptr1,int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n,lastdigit,firstdigit;
    int* ptr1 = &firstdigit;
    cin>>n;
    int* ptr2 = &lastdigit;
    frstlst(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;

}