//In this we make data members private and access through member function.
#include<iostream>
using namespace std ;
class player{
    private:
    int score ;
    int health ;
    public:
    //setter
    void setscore(int s){
        score = s ;
    }
    void sethealth(int h){
        health = h ;
    }
    //getter
    int getscore(){
        return score ;
    }
    int gethealth(){
        return health ;
    }
};
int main(){
    player harsh ;
    harsh.setscore(10);
    harsh.sethealth(50);
    cout<<harsh.getscore()<<endl;
    cout<<harsh.gethealth()<<endl;
    return 0 ;
}