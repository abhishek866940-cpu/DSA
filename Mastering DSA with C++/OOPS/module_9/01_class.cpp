//Class is a blueprint.
//object is an instance of the class.
#include<iostream>
class Player{
    public:
    int score;  //data members 
    int health ;
};
using namespace std;
int main(){
    Player amit; //amit is an object
    amit.score = 90 ;
    amit.health = 100 ;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;
    Player harsh ;
    harsh.score = 100 ;
    harsh.health = 20 ;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;
    return 0 ;
}