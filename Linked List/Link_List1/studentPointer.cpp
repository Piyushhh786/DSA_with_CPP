#include<iostream>
#include<vector>
using namespace std;
class Student{
public: 
    string name;
    int roll_no;
    int marks;
    Student(string name, int roll_no, int marks){
        this->name= name;
        this->roll_no=roll_no;
        this->marks = marks;
    }
};
void change(Student* S1){
    S1->name="Harsh";
}
int main(){
    //we can also declare it dynamically by using pointer

    Student* S1= new Student("piyush",45,82);
    // Student* ptr = &S1;
    // cout<<S1.name<<endl;
    // ptr->name = "harsh";//! *ptr.name nahi krskte bracket
    // cout<<S1.name<<endl;
    // change(ptr);
    // cout<<S1.name;
    cout<<S1->name<<" "<<S1->marks<<endl;
    //* S1->name="Piyush";
    //* S1->roll_no=45;
    S1->marks=79;
    cout<<S1->name<<" "<<S1->marks<<endl;
    change(S1);
    cout<<S1->name<<" "<<S1->marks<<endl;


}