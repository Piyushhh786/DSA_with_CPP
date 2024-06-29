#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your marks : ";
    cin>>a;
    if(a>=91 && a<=100){
        cout<<"EXCELLENT";
    }
     if(a>=81 && a<=90){
        cout<<"VERY GOOD";
    }
     if(a>=71 && a<=80){
        cout<<"GOOD";
    }
     if(a>=61 && a<=70){
        cout<<"CAN DO BETTER";
    }
     if(a>=51 && a<=60){
        cout<<"AVERAGE";
    }
     if(a>=41 && a<=50){
        cout<<"BELOW AVERAGE";

    }
    if(a>=0 && a<=40){
    cout<<"fail";
    }
   
    if(a>100){
        cout<<"error";

    }
    
}
