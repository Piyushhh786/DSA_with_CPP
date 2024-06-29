#include<iostream>
#include<string>
#include<vector>
using namespace std;
class player{
    private: // class member is always be private
    int score;
    int health;
    public://function always be public 
    //setter
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health=h;
    }
    //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    
} ;
int main(){
    player amit;
    amit.setScore(78);
    amit.setHealth(89);
    cout<<amit.getScore()<<" ";
    cout<<amit.getHealth();
    
    
}