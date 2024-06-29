#include<iostream>
#include<string>
#include<vector>
using namespace std;
class player{
    public:
    string name;
    int score;
    int kill;
} ;
int main(){
    player student[5];
    for(int i=1;i<=5;i++){
        cout<<"Enter student "<<i<<" Name: ";
        cin>>student[i].name;
        cout<<"Enter score of it: ";
        cin>>student[i].score;
        cout<<"Enter kill of it: ";
        cin>>student[i].kill;
    }
    cout<<"NAME   "<<"SCORE  "<<"KILL"<<endl;
    for(int i=1;i<=5;i++){
        cout<<student[i].name<<" "<<student[i].score<<" "<<student[i].kill;
    }
}