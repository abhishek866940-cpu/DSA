#include<iostream>
using namespace std;
int main(){
    int a = 5 ;
    int b= 3 ;
    int c = a%b;   //Modulus operator 
    cout<<"Value of c is equal to "<<c<<endl;
    //if a<b  then remainder is a .
    cout<<99%-4<<endl;

    cout<<(a%-b)<<endl;
    cout<<(-a%b)<<endl;
    cout<<(-a%-b)<<endl ;
}
//properties
// 1) a%-b = a%b
//2) -a%b = -(a%b)
//3) -a%-b= -(a%b)