#include<iostream>
using namespace std;
class car{
    public:
    string name ;
    int price ;
    int seats ;
    string type ;
};
void change(car &c){
    c.name = "Audi A8";
}
int main(){
    car c1;
    c1.name = "Fortuner";
    c1.price = 3000000;
    c1.seats = 7 ;
    c1.type = "suv" ;
    cout<<c1.name<<endl;
    change(c1);      //therefore pass by value.
    cout<<c1.name<<endl;

    return 0 ;
}