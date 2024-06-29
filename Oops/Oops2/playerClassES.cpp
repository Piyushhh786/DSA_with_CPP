#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class player{
    class Vest{
    private:
        int VestHp;
        int VestLevel;
    public:
        //setter
        void set_VestHp(int VestHp){
            this->VestHp=VestHp;
        }
        void set_VestLevel(int VestLevel){
            this->VestLevel=VestLevel;
        }
        int get_VestHp(){
            return VestHp;
        }
        int get_VestLevel(){
            return VestLevel;
        }
    };
    class Helmet{
        private:
        int hp;
        int level;
    public:
        //setter
        void set_hp(int hp){
            this->hp=hp;
        }
        void set_level(int level){
            this->level=level;
        }
        //getter
        int get_hp(){
            return hp;
        }
        int get_level(){
            return level;
        }
    };
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
    Vest vest;
    
    
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
    void set_gun(Gun gun){
        this->gun = gun;
    }
    void set_Helmet(int level){
        Helmet* helmet=new Helmet;
        helmet->set_level(level);
        int hp;
        if(level==1){
            hp  = 25;
        }
        else if(level == 2){
            hp=50;
        }
        else if(level==3){
            hp=100;
        }
        else{
            cout<<"Error,INvalid level!!";
        }
        helmet->set_hp(hp);
        this->helmet=*helmet;
    }
    void set_vest(int level){
        Vest* vest = new Vest;
        vest->set_VestLevel(level);
        int hp;
        if(level == 1) hp = 20;
        else if(level==2)hp =30;
        else if(level ==3)hp =50;
        else cout<<"Error,Invalid vest!!";
        vest->set_VestHp(hp);
        this->vest=*vest;

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
    Gun get_gun(){
        return gun;
    }
    Helmet get_helmet(){
        return helmet;
    }
    Vest get_vest(){
        return vest;
    }
    
    
};
int main(){
    Gun akm;
    akm.scope=2;
    akm.ammo=150;
    akm.damage=50;
    Gun awm;
    awm.scope=8;
    awm.damage=200;
    akm.ammo=15;
    player piyush;//static memory allocation
    piyush.set_age(18);
    piyush.set_score(45);
    piyush.set_alive(true);
    piyush.set_health(100);
    piyush.set_gun(akm);
    piyush.set_Helmet(3);
    player krishan;//static memory allocation
    krishan.set_age(18);
    krishan.set_score(40);
    krishan.set_alive(true);
    krishan.set_health(100);
    krishan.set_gun(awm);
    krishan.set_Helmet(2);
    

    
}