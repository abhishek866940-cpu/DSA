#include<iostream>
using namespace std ;
int main(){
    int x , y ;
    char op ;
    cout<<"Input operand : ";
    cin>>x>>y ;

    cout<<"Input the operator : ";
    cin>>op ;

    switch (op)
    {
    case '+' : 
        cout<<"Sum of two given numbers = "<<x+y ;
        break;
    case '-' : 
        cout<<"Subtraction of two given numbers = "<<x-y ;
        break ;    
    case '*' :
        cout<<"Multiplication of two numbers = "<<x*y ;
        break ;
    case '/' : 
        cout<<"Division of two numbers = "<<x/y ;    
        break; 
    default :    
        cout<<"Invalid operator" ;
    }
    return 0 ;
}