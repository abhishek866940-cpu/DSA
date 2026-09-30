// static allocation ----> stack memory or compile time memory.
// dynamically allocation ----> heap memory or real time memory.
#include<iostream>
using namespace std ;
class player{
    private:
    int age;
    int score;
    bool alive ;
    int health ;
    
    public:
    void setage(int age){
        this->age = age ;
    }
    void setscore(int score){
        this->score = score ;
    }
    void setIsalive(bool alive){
        this->alive = alive ;
    }
    void sethealth(int health){
        this->health = health ;
    }

    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool getIsalive(){
        return alive ;
    }
    int gethealth(){
        return health ;
    }
};
int main(){
    player harsh ;  // object created, statically.
    player raghav ; //compile time, static allocation.
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setIsalive(true);
    harsh.sethealth(70);
    
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setIsalive(true);
    raghav.sethealth(100);

    player *urvi = new player ; //run time, Dynamic allocation.
    (*urvi).sethealth(20);   //or urvi->sethealth(20);
    cout<<(*urvi).gethealth()<<endl;
    cout<<urvi->gethealth()<<endl;
    return 0 ;
}