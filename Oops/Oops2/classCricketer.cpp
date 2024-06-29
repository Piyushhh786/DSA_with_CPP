#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cricketer{
    private:
    string name;
    int age;
    int matches;
    int avg_runs;
    public:
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setMatches(int matches){
        this->matches=matches;
    }
    void setRuns(int run){
        avg_runs=run;
    }
    int getAge(){
        return age;
    }
    int getMatches(){
        return matches;
    }
    int getRuns(){
        return avg_runs;
    }
    string getName(){
        return name;
    }
};
int main(){
    vector<cricketer>c(2);
    c[0].setName("Piyush");
    c[0].setAge(18);
    c[0].setMatches(10);
    c[0].setRuns(256);
    c[1].setName("Ayush");
    c[1].setAge(20);
    c[1].setMatches(10);
    c[1].setRuns(400);
    
    for(int i=0;i<2;i++){
       cout<<c[i].getName()<<endl;;
       cout<<"Matches:"<<c[i].getMatches()<<endl;
       cout<<"Average runs: "<<c[i].getRuns()<<endl;
       cout<<"Age: "<<c[i].getAge()<<endl<<endl;
    }
}