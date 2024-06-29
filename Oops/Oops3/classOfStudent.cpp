#include<iostream>
#include<string>
using namespace std;
class Student{
private: 
    string Name;
    string Admission_No;
    int math = -1;
    int environment = -1;
    int dsa = -1;
public:
    void setName(string Name){
        this->Name=Name;
    }
    void setAdmission_No(string Admission_No){
        this-> Admission_No= Admission_No;
    }
    void setMathMarks(int math){
        this->math = math;
    }
    void setEnvironmentMarks(int environment){
        this-> environment=environment;
    }
    void setDsaMarks(int dsa){
        this->dsa =dsa;
    }
    string getName(){
        return Name;
    }
    string getRollNo(){
        return Admission_No;
    }
    int getMathMarks(){
        return math;
    }
    int getEnvironmentMarks(){
        return environment;
    }
    int getDsaMarks(){
        return dsa;
    }
    void display(){
        cout<<Name<<" "<<Admission_No<<endl;
        cout<<"Maths marks is: "<<math<<endl;
        cout<<"Environment marks is: "<<environment<<endl;
        cout<<"DSA marks is: "<<dsa<<endl;
    }
};
int main(){
    Student s1;
    s1.setName("Piyush");
    s1.setAdmission_No("u23cs045");
    s1.setDsaMarks(78);
    s1.setMathMarks(67);
    s1.setEnvironmentMarks(83);
    s1.display();
   cout<< s1.getDsaMarks();

}