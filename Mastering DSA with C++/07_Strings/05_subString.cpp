#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s = "Abhishek";
    cout<<s.substr(1)<<endl;

    // s.substr(idx,len)
    cout<<s.substr(2,2)<<endl;

    cout<<"Printing the half of a string"<<endl;
    string str ;
    cout<<"Enter a single word string : "<<endl;
    cin>>str;

    int n = str.size();
    cout<<str.substr(n/2)<<endl;

    // for input the multiple words we use ---> getline(cin,str)
    // After pressing Enter, a newline character '\n' remains in the input buffer.
    // it may read that leftover newline and give an empty string.
    // therefore, use cin.ignore();
    
    cout<<"Taking multiple words as input : ";
    string st ;
    cin.ignore();
    getline(cin,st);
    cout<<st;

    return 0 ;
}