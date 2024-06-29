#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter 3rd number";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"1st number is greatest : "<<a;
        }
        else{
            cout<<"3rd number is greatest : "<<c;
        }
    }
    else{//b>a
    if(b>c){
        cout<<"2nd number is greatest : "<<b;
    }
    else{
        cout<<"3rd number is greatest : "<<c;
        
    }

    }

}