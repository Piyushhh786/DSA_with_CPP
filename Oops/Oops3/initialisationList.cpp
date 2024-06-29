#include<iostream>
using namespace std;
class Bike{
private:
    int engineSize;
    int tyreSize;
public:
    //  setter
    void setEngineSize(int engineSize){
        this->engineSize=engineSize;
    }
    void setTyreSize(int tyreSize ){
        this->tyreSize=tyreSize;
    }
    int getEngineSize(){
        return engineSize;
    }
    int getTyreSize(){
        return tyreSize;
    }
    //constructor
    //!method 1
    // Bike (int engineSize,int tyreSize){
    // setTyreSize(tyreSize);
    // setEngineSize(engineSize);
    // cout<<"constructor ko call hua!!\n";
    // }
    //!method 2 INITIALISATION LIST 
    //constructor overloading
    //function ke sth bhi ho skta hai
    Bike (int ES): setEngineSize(ES),setTyreSize(100);
    Bike (int ES,int TS): setEngineSize(ES),setTyreSize(TS){}
    Bike():setEngineSize(10),setTyreSize(29);//default

};
int main (){

}