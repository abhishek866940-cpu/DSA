// #include<iostream>
// using namespace std ;
// int main(){
//     int a ;
//     if(3+2%5) cout<<"This works"<<endl;
//     if(a=10) cout<<"even this works"<<endl;
//     if(-5) cout<<"suprisingly this works"<<endl;
//     return 0 ;
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a,b ;
    char ch ;
    cin>>a;
    cin>>b;
    cin>>ch;
    switch(ch){
        case '+' : cout<<a+b;
        break ;
        case '-' : cout<<a-b;
        break;
        case '*' : cout<<a*b;
        break;
        case '/' : if(b!=0) cout<<a/b;
                    else cout<<"undefine";
                    break;
        default :
              cout<<"Invalid operator. Please enter one of +,-,*,/.";  
    }
	return 0;
}
