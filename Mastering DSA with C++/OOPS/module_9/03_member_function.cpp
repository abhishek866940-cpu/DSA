#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
    void showhealth(){                      //member function
        cout<<"Health is : "<<health<<endl; 
    }
    void showscore(){
        cout<<"Score is : "<<score<<endl;
    }
};

int main(){
    player amit;
    amit.score = 100;
    amit.health = 90 ;
    amit.showhealth();
    amit.showscore();
    return 0 ;
}