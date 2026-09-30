#include<iostream>
using namespace std;
int main(){
    int p = 5 , q = 10 ;
    p += q -= p ;  //only these operator have Associative right to left.
    cout<<p<<" "<<q<<endl;
    return 0 ;
}
