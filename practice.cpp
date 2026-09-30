#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s = "Abhishek is a Talented Boy. ";
    stringstream ss(s);
    string temp ;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0 ;
}