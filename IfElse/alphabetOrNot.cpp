#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"It is a lowercase alphabet";
    }
    if(ascii>=65 && ascii<=90){
        cout<<"it is a uppercase alphabet";
    }
    if(ascii>=48 && ascii<=57){
        cout<<"It is a number character";
    }
}