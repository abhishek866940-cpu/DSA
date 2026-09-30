// Ques. Given a sorted array of n elements and a target 'x'.find the first occurrence of 'x' in the array.if 'x' does not exist return - 1.

#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4 ;

    int lo = 0 ;
    int hi = n-1 ;
    int mid;

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(arr[mid]==x){
            if(arr[mid]!=arr[mid-1]){
                cout<<"The first occurrence of "<<x<<" is at "<<mid<<endl;
                break ; 
            }
            else{
                hi = mid - 1 ;
            }

        }
        else if(arr[mid]<x) lo = mid + 1 ;
        else hi = mid - 1 ;
    }
    return 0 ;
}