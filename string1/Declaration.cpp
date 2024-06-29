#include<iostream>
using namespace std;
int main(){
    // string is basically char array;
   char str[]={'a','\0','b','c'};
   char strr[]="ab\0c";
    cout<<str<<endl<<strr;//both will work
    // \0 is a null character;
    // char array have an special ability 
    // like printing we do not need loop
}