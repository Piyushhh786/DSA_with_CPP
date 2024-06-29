#include<iostream>
// #include<vector>
using namespace std;
//parental class
//
class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int seats;
    Vehicle (){
        cout<<"Call lagi hai vehicle ko"<<endl;
    }
};//over parental class
class Bike : public Vehicle{
public:
    int handleSize;
};
class Car : public Vehicle{
public:
    int steeringSize;
    Car (){
        cout<<"call lagi hai car ko"<<endl;
    }
    
};
int main(){
	Car hundai;
    hundai.tyreSize=10;//public likhna imp hai access krne k liye
    hundai.steeringSize=40;
    cout<<hundai.tyreSize;
}