// Binary Search Algorithm only works if array is sorted(ascending or descending)
// Binary Search reduces the search space in half.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {-9,-2,0,6,9,12,54,76,86};
    int target = 54 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0 ;
    int hi = n-1 ;
    int mid ;

    while(lo<=hi){
        mid = (lo+hi)/2 ;
        if(arr[mid]==target) {
            cout<<"Element found at index "<<mid<<endl;
            break ;
        }
        else if(arr[mid]>target) hi = mid - 1 ;
        else lo = mid + 1 ;
    }
    return 0 ;
}

// 1) time complexity is O(logn).

// 2) for integer constraint 
// we can write ,
// ( lo + hi )/2  = (lo + lo + hi - lo )/2
//                = (lo + lo )2 + (hi - lo)/2
//                = lo + (hi - lo)/2