#include<iostream>
using namespace std;
class calculator{
    public:
    int a ; //data member
    int b ;
    void add(){   //member function
        cout<<"Addition is : "<<a+b<<endl;
    }
    void sub(){
        cout<<"Subtraction is : "<<a-b<<endl;
    }
};
int main(){
    calculator calci ;
    calci.a = 10 ;
    calci.b = 5 ;
    calci.add();
    calci.sub();
    return 0 ;
}
