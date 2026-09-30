#include<iostream>
using namespace std;
class Cricketer{
public:
    string name ;
    int runs ;
    float avg ;
    Cricketer(string name , int runs ,float avg){
        this->name = name ;
        this->runs = runs ;
        this->avg = avg ;
    }
    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;
        cout<<runs<<endl;
    }
    int matches(){
        return runs/avg ;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000,55.7);
    Cricketer c2("Rohit Sharma",18000,47.8);

    c1.print(5);
    c2.print(7);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
    
    return 0 ;
}