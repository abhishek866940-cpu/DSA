#include<iostream>
#include<string.h>
using namespace std ;
void f1(){
    string str = "raghav";
    cout<<str<<endl ;
    str[1] = 'o';
    cout<<str<<endl;
    // Therefore , strings are mutable in c++ but it is not possibe in java.
}

int main(){
    f1();
    return 0 ;
}
