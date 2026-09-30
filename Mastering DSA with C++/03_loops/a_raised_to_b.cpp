#include<iostream>
using namespace std ;
int main(){
    int a,b ;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    long long power = 1 ;
    if(b==0) cout<<a<<" raised to the power of "<<b<<" is 1"<<endl;
    else if(b<0){
        for(int i = 1 ; i <= (-b) ; i++){
            power = power*a ;
        }
       cout<<a<<" raised to the power of "<<b<<" is "<<(1.0/power)<<endl;
    }
    else{
        for(int i = 1 ; i <= b ; i++){
            power = power*a ;
        }
       cout<<a<<" raised to the power of "<<b<<" is "<<power<<endl;
    }
    return 0 ;
}