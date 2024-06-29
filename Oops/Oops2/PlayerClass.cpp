#include<iostream>
using namespace std;
class player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    //setter
    void set_health(int health){
        this->health=health;//this->health :means player bala health//player::health
    }
    void set_age(int age){
        player::age=age;//this is also valid;;
    }
    void set_score(int score){
        this->score=score;
    }
    void set_alive(bool alive){
        this->alive=alive;
    }
    //getter
    int get_age(){
        return age;
    }
    int get_health(){
        return health;
    }
    int get_score(){
        return score;
    }
    bool get_alive(){
        return alive;
    }
    
};
int add_score(player a,player b){
        return a.get_score()+b.get_score();
    }
int main(){
    player piyush;//static memory allocation
    piyush.set_age(18);
    piyush.set_score(45);
    piyush.set_alive(true);
    piyush.set_health(100);
    player krishan;//static memory allocation
    krishan.set_age(18);
    krishan.set_score(40);
    krishan.set_alive(true);
    krishan.set_health(90);
    cout<<krishan.get_score()<<" "<<piyush.get_score();
    cout<<endl<<add_score(piyush,krishan)<<endl<<endl;
    player *reema = new player;//dynamic memory allocation
    player objReema =*reema;//if  you don't want to use this 
    objReema.set_score(100);
    cout<<objReema.get_score()<<" ";
    reema->set_score(200);
    cout<<reema->get_score()<<" ";
    cout<<objReema.get_score()<<endl<<endl;
    int b=5;
    int *a=&b;
    cout<<*a<<" "<<b;
    *a=7;
    cout<<endl<<b;


    
}