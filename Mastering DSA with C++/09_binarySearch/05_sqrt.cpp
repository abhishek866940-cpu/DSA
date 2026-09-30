// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter the number : "<<endl;
    cin>>x;

    int lo = 0 ;
    int hi = x ;
    int mid ;
    bool flag = false ;

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        long long m = (long long)mid ;
        long long y = (long long)x ;

        if(m*m == y ){
            cout<<"The sqrt of "<<y<<" is "<<m<<endl;
            flag = true ;
            break ;
        }
        else if(m*m > y) hi = mid - 1 ;
        else lo = mid + 1 ;
    }

    if(!flag) cout<<"The sqrt of "<<x<<" is "<<hi<<endl;
    return 0 ;
}