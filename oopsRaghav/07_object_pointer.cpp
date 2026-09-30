#include<iostream>
using namespace std;
class Cricketer{
public:    
    string name ;
    int runs ;
    float avg ;

    Cricketer(string name , int runs , float avg){
        this->name = name ;
        this->runs = runs ;
        this->avg = avg ;
    }
};
void change(Cricketer* c){
    c->avg = 72.7;          // (*c).avg = 77.5 ;
}
int main(){
    Cricketer c1("Virat kohli",25000,55.7);
    Cricketer* p1 = &c1 ;

    cout<<(*p1).runs<<endl;
    cout<<p1->runs<<endl;                   //a->b is equivalent to (*a).b
    // (*p1).avg = 77.5 ;    
    change(&c1);

    cout<<(*p1).avg<<endl;
    cout<<p1->avg<<endl;
    return 0 ;
}