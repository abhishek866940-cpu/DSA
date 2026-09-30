#include<iostream>
using namespace std;
class player{
    private:
    int age;
    int score;
    bool alive;
    int health;
    public:
    //setter
    void setage(int age){
        this->age = age ;      //player::age = age ;
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
    //getter
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
};
int addscore(player a ,player b){
    return a.getscore()+b.getscore();
}
player getmaxscore(player a , player b){
    if(a.getscore()>b.getscore()) 
    return a;
    else return b;
}
int main(){
    player harsh ;  // object created, statically.
    player raghav ;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setIsalive(true);
    harsh.sethealth(70);
    
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setIsalive(true);
    raghav.sethealth(100);

    cout<<addscore(harsh,raghav)<<endl;
    player sanket = getmaxscore(harsh,raghav);
    cout<<sanket.getscore()<<endl;
    cout<<sanket.gethealth()<<endl;
    return 0 ;
}
// In c language we use this.score = score instead of this->score = score