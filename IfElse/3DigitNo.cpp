#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<1000 && n>99){
        cout<<"It is a three digit number ";

    }
    else{
        cout<<"It is not a three digit number ";
    }
}