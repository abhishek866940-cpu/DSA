#include<iostream>
#include<string.h>
using namespace std ;
int main(){
    string st = "Raghav garg is at PW";
    cout<<st.size()<<endl;   //Dono use kr skte hai
    cout<<st.length()<<endl;

    cout<<"Use of push and pop operations "<<endl;
    string str = "abcde";
    cout<<str<<endl;
    str.push_back('f');
    str.push_back('g');
    cout<<str<<endl;
    str.pop_back();
    str.pop_back();
    cout<<str<<endl;

    //Zabardast cheez
    
    string s = "abc";
    string t = "def";
    cout<<"Strings after '+' operator "<<endl;
    s = s + t ;     //modify the strings but kisi number ko modify nhi kr skte 
    cout<<s<<endl;

    // use of reverse function
    string p = "abcdef";
    cout<<"Use of reverse function "<<endl;
    cout<<p<<endl;
    reverse(p.begin(),p.end()); //complete string ko reverse kr dega
    cout<<p<<endl;
    reverse(p.begin(),p.end()); //for back in original form
    cout<<"Reversing a part of the string"<<endl;
    reverse(p.begin()+2,p.end()-1);
    cout<<p<<endl;
    return 0 ;
}