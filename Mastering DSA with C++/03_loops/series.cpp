// 1-2+3-4+5-6+7-8......upto n .
#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int sum = 0 ;
    cout<<"Enter the numbers : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        if(i%2!=0) sum += i ;
        else sum -= i ;
    }
    cout<<sum<<endl;
    return 0 ;
}