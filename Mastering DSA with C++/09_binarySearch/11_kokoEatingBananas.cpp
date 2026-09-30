// leetcode - 875
// koko eating bananas 

#include<iostream>
#include<vector>
using namespace std ;
bool isMinimumSpeed(int current_speed , vector<int> & piles , int hour){
    int count = 0 ;
    int m = current_speed ;
    int n = piles.size();

    for(int i = 0 ; i < n ; i++){
        if(m >= piles[i]) count++ ;
        else{
            if(piles[i]%m == 0) count += piles[i]/m;
            else{
                count += piles[i]/m + 1 ;
            }
        }
    }

    return (count <= hour) ;

}
int main(){
    vector<int> piles = {3,6,7,11} ;
    int h = 8 ; // restricted given hours to eat banana
    int n = piles.size();
    int mx = -1 ;

    for(int i = 0 ;i < n ; i++){
        mx = max(mx,piles[i]);
    }

    int lo = 1 ;
    int hi = mx ;
    int mid ;
    int ans ;
    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(isMinimumSpeed(mid,piles,h)){
            ans = mid ;
            hi = mid - 1 ;
        }
        else lo = mid + 1 ;
    }

    cout<<"The minimum speed taken by koko to eat banans in "<<h<<" hours is "<<ans<<endl;
    return 0 ;
}
