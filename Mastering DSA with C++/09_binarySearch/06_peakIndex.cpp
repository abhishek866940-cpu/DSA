// Peak Index in a mountain array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,1,0};  
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 1 ;
    int hi = n-2 ;
    int mid ;

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;

        if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1]){
            cout<<"Peak index is "<<mid<<endl ;
            break ;
        }
        else if(arr[mid] < arr[mid+1]) lo = mid + 1;
        else hi = mid - 1 ;
    }

    return 0 ;
}

// 1) minimum three elements for a mountain array.
// 2) First and last index cannot be a peak index. 