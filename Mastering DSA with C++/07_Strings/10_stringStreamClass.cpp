// StringStream Class

// Given a sentence,split every single word of the sentence and print in a new line

#include<iostream>
#include<string>
#include<sstream>
using namespace std ;
int main(){
    string str = "Raghav is a maths teacher";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

    return 0 ;
}

// StringStream Class is used to split the words based on whitespaces.