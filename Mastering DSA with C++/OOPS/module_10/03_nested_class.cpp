#include<iostream>
using namespace std;
class Gun{
    public :
    int ammo;
    int damage;
    int scope;
};
class player{
    private:
        class Helmet{
        int hp ;
        int level;
        public: 
        void setHp(int hp){
            this->hp = hp ;
        }
        void setLevel(int level){
            this->level = level ;
        }
        int getHp(){
            return hp;
        }
        int getlevel(){
            return level ;
        }
    };
    int age;
    int score;
    bool alive;
    int health;
    Gun gun ;
    Helmet helmet ;

    public:
  
    void setage(int age){
        this->age = age ;      
    }
    void setscore(int score){
        this->score = score;
    }
    void setIsalive(bool alive){
        this->alive = alive ;
    }
    void sethealth(int health){
        this->health = health ;
    }
    void setGun(Gun gun){
        this->gun = gun ;
    }
   
    int getage(){
        return age ;
    }
    int getscore(){
        return score ;
    }
    bool getIsalive(){
        return alive ;
    }
    int gethealth(){
        return health ;
    }
    Gun getGun(){
        return gun ;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet ;   //dynamic allocation
        helmet->setLevel(level);
        int health = 0 ;
        if(level==1)
        health = 25 ;
        else if(level==2)
        health = 50 ;
        else if(level==3)
        health = 100 ;
        else 
        cout<<"error, Inavalid level!!";

        helmet->setHp(health);
        this->helmet = *helmet ;
    }
    Helmet helmet(){
        return helmet;
    }
};
int main(){
    player harsh ;  
    player raghav ;

    Gun akm ;
    akm.ammo = 40;
    akm.damage = 100;
    akm.scope = 4 ;
    
    Gun awm ;
    awm.ammo = 10 ;
    awm.damage = 150;
    awm.scope = 8 ;


    harsh.setage(21);
    harsh.setscore(100);
    harsh.setIsalive(true);
    harsh.sethealth(70);
    harsh.setGun(akm);
    harsh.setHelmet(2);
    
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setIsalive(true);
    raghav.sethealth(100);
    raghav.setGun(awm);
    raghav.setHelmet(3);

    return 0 ;
}