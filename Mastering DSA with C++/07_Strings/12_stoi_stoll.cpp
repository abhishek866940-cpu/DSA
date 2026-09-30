// stoi and stoll are built in functions.

// stoi --> string to integer (-2^31 to 2^31-1)
// stoll --> string to long long (-2^63 to 2^63-1)

#include<iostream>
#include<string>
using namespace std ;
int main(){

    // stoi 
    
    string s = "123456";
    int x = stoi(s);
    cout<<x<<endl;
    cout<<x+1<<endl;

    // stoll

    string y = "1232146895618932903";
    long long z = stoll(y); 
    cout<<z<<endl;
    return 0;
}