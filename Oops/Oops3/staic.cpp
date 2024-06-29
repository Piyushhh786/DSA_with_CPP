#include<iostream>
using namespace std;
class Bike {
public:
    static int noOfBike;// ye class me belong krega pr object ke through 
    // print kra skte hai;
    int tyreSize;// ye object me belong krega
    int engineCC;
    static void inc_noOfBike(){
        noOfBike++;
    }
};
int Bike :: noOfBike=10;//globally
int main(){
    // int Bike :: noOfBike =13;//ese initialize nhi krte;;
    Bike honda,hero;
    cout<<honda.noOfBike<<" ";
    cout<<hero.noOfBike<<endl;
    honda.inc_noOfBike();
    cout<<hero.noOfBike;
    Bike::inc_noOfBike();//ese bhi kr skte hai
    Bike::noOfBike=18;
    cout<<Bike::noOfBike;


    return 0;
}