#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter month number to display days : ";
    cin>>x;
    switch(x){
        case 1 :
        cout<<"jan 31";
        break;
        case 2 :
        cout<<"feb 28";
        case 3 :
        cout<<"mar 31";
        case 4 :
        cout<<"apr 30";
        break;
        case 5 :
        cout<<"may 31";
        break;
        case 6 :
        cout<<"june 30";
        break;
        case 7 :
        cout<<"july 31";
        break;
        case 8 :
        cout<<"aug 31";
        break;
        case 9 :
        cout<<"sept 30";
        break;
        case 10 :
        cout<<"oct 31";
        break;
        case 11 :
        cout<<"nov 30";
        break;
        case 12 :
        cout<<"dec 31";

    }
}