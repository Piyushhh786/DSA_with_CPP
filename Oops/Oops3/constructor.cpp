#include<iostream>
using namespace std;
class Bike{
    private:
    int tyreSize;
    int engineSize;
    public:
    void setTyreSize(int tyreSize){
        this->tyreSize=tyreSize;
    }
    void setEngineSize(int engineSize){
        this->engineSize=engineSize;
    }
    int getTyreSize(){
        return tyreSize;
    }
    int getEngineSize(){
        return engineSize;
    }
    //there is always a inbuilt constructor; who call the compiler and allocate memory;
    Bike (int engineSize,int tyreSize){
        setTyreSize(tyreSize);
        setEngineSize(engineSize);
        cout<<"constructor ko call hua!!\n";
    }
    // Destructor
    ~Bike (){
        cout<<"destructor call hota hai jab object out off scope  chale jate hai"<<endl;

    }
};
int main(){
    Bike tvs(1500,56);//default constructor ko call lagi;
    Bike honda(225,59);
    Bike Hero(224,78);
    bool flag = true;
    if(flag==true){
        Bike BMW(1700,78);
    }//yahan khtm bmw so destructor call  lagega memory free ke liye

    cout<<tvs.getEngineSize()<<" ";
    cout<<tvs.getTyreSize()<<" "<<endl;
    cout<<honda.getEngineSize()<<" ";
    cout<<honda.getTyreSize()<<" "<<endl;
    cout<<Hero.getEngineSize()<<" ";
    cout<<Hero.getTyreSize()<<" "<<endl;
    //! destucotor wotks here
    //! shallow copy in class 
//online dekh chat gpt shallow copy
    // you make a copy of honda
//! deep copy
    Bike royal = honda;
    Bike Enfield(honda);
    

    
}