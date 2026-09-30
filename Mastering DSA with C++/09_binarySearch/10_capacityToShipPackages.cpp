// leetcode - 1011
// Capacity to ship packages within D days

#include<iostream>
using namespace std ;

bool check(int mid , vector<int> & weights , int days ){
    int n = weights.size();
    int count = 1 ;
    int m = mid ; // m is the capacity of the ship which has to be minimum

    for(int i = 0 ; i < n ; i++){
        if(m >= weights[i]){
            m -= weights[i];
        }
        else{
            count++ ;
            m = mid ;
            m -= weights[i];
        }
    }

    if(count>days) return false ;
    else return true ;
}

int main(){
    // ex - 1

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5 ;

    // ex - 2

    // vector<int> weights = {3,2,2,4,1,4};
    // int days = 3 ;

    int n = weights.size();
    int max = INT_MIN ;
    int sum = 0 ; 

    for(int i = 0 ; i < n ; i++){
        if(max<weights[i]) max = weights[i];
        sum += weights[i];
    }

    int lo = max ;
    int hi = sum ;

    int minCapacity = sum ; //Capacity of the ship

    while(lo<=hi){
        int mid = lo + (hi-lo)/2 ;
        if(check(mid,weights,days)){
            minCapacity = mid ;
            hi = mid - 1 ;
        }
        else{
            lo = mid + 1 ;
        }
    }

    cout<<"Minimum capacity of the ship to take all package within 5 days is "<<minCapacity<<endl;


    return 0 ;
}