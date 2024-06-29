#include<iostream>
using namespace std;
float area(float r){
    float a;
    a = 3.14*r*r;
    return a;
}
int main(){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<area(r);
}