// Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element.


// Method 1 - Linear Search
#include<iostream>
using namespace std ;
int main(){
    int arr[] = {0,1,3,4,6,7,8,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=i){
            cout<<"The first missing +ve integer is "<<i<<endl;
            break ;
        }
    }
    return 0 ;
}