// Ques. Given a sorted integer array and a integer x ,find the lower bound of x .

// Jb bhi sorted array de toh ---> binary search sochna hai

// METHOD 2 = BINARY SEARCH 

#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 12 ;

    int lo = 0 ;
    int hi = n - 1 ;
    int mid ;
    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(arr[mid]==x){
            cout<<"Lower bound of "<<x<<" is "<<arr[mid-1];
            break ;
        }
        else if(arr[mid]<x) lo = mid + 1 ;
        else hi = mid - 1 ;
    }

    // when (lo > hi) then while loop stops and the hi pointer is at lower bound of x and lo pointer is at higher bound of x.

    cout<<"Lower bound of "<<x<<" is "<<arr[hi];    return 0 ;
}