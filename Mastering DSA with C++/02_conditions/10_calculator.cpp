#include<iostream>
using namespace std;
int main(){
    int a , b ;
    char ch ;
    cout<<"Enter the problem : ";
    cin>>a>>ch>>b;
    switch(ch){
        case '+' :
        cout<<"The addition is : "<<a+b;
        break ;
        case '-' : 
        cout<<"The subtraction is : "<<a-b;
        break;
        case '*' :
        cout<<"The multiplication is : "<<a*b;
        break ;
        case '/' : 
        cout<<"The division is : "<<a/b ;
        break ;
        default :
        cout<<"Invalid" ;
    }
    return 0 ;
}