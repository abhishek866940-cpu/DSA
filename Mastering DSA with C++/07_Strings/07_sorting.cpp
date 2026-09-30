#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a string : ";
    getline(cin,s);
    sort(s.begin(),s.end());
    // comparsion is based on ASCII values.
    cout<<s;
    return 0 ;
}