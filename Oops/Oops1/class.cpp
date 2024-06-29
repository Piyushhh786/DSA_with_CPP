#include<iostream>
#include<string>
using namespace std;
class player{
    public://it is for privacy,security--->data abstraction
    string name;
    int score;
    int kill;
};
int main(){
    player amit;
    // player.name="Amit";
    amit.score=100;
    amit.name="Amit";
    amit.kill=0;
    cout<<amit.score<<endl;
    cout<<amit.kill<<endl;
    cout<<amit.name;

}