// Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element.  

// Method 2 - Binary Search

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,3,4,6,7,8,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0 ;
    int hi = n - 1 ;
    int mid ;
    int ans;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) lo = mid + 1 ;
        else{
            ans = mid ;
            hi = mid - 1 ;
        }
    }
    cout<<"Missing element is "<<ans<<endl;
    return 0 ;
}

