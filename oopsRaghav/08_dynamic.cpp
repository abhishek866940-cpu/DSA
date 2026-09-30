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
int main(){
    int* ptr = new int(5245);     //runtime memory allocation(stored in heap memory)
    cout<<(*ptr)<<endl;

    Cricketer c1("virat kohli",25000,55.7);
    Cricketer* c2 = new Cricketer("Rohit Sharma",18000,48.9);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
    return 0 ;
}