#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number whose fractional part is to be found ";
    float x ;
    cin>>x;
    int y = (int)x;
    // float z = (float)y;
    if(y<0) y = y - 1 ;
    cout<<"The fractional part of the "<<x<<" is "<<x-y<<endl;
    return 0 ;
}