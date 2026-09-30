#include<iostream>
using namespace std;
int main(){
    int a = 16;
    int b = 3 ;
    int q = a/b ; //q is quotient.
    int r ;
    r = a - (b*q);
    cout<<"Value of r is equal to "<<r<<endl;
    return 0 ;
}