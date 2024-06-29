#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number : ";
    cin>>x;
    if(x==1){
        cout<<"jan 31";
    }
    if(x==2){
        cout<<"feb 28";
    }
    if(x==3){
        cout<<"mar 31";
    }
    if(x==4){
        cout<<"apr 30";
    }
    if(x==5){
        cout<<"may 31";
    }
    if(x==6){
        cout<<"june 30";
    }
    if(x==7){
        cout<<"jul 31";
    }
    if(x==8){
        cout<<"aug 31";
    }
    if(x==9){
        cout<<"sep 30";
    }
    if(x==10){
        cout<<"oct 31";
    }
    if(x==11){
        cout<<"nov 30";
    }
    if(x==12){
        cout<<"dec 31";
    }
    if(x>12){
        cout<<"condition not matching";
    }
}