#include<iostream>
using namespace std;
int main(){
    float p,r;
    int t ;
    cout<<"Enter the principal amount : ";
    cin>>p;
    cout<<"Enter the rate of interest : ";
    cin>>r;
    cout<<"Enter the duration : ";
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"The simple interest is : "<<si<<endl;
    return 0 ;
}