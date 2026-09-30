#include<iostream>
#include<string>
using namespace std ;
int main(){
    int x = 12345;
    string s = to_string(x);
    cout<<x<<endl;
    cout<<s.length()<<endl; //number of digit in the number without using loop wagera.
    return 0 ;
}