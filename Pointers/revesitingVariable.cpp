#include<iostream>
using namespace std;
int main(){
    int x=9,y =0;
    cout<<&x<<" "<<&y<<endl;// if x =5 0x61ff0c ;
    //0x61ff08
    int *p1 = &x,*p2 = &y;
    cout<<*p1<<endl<<*p2;
}