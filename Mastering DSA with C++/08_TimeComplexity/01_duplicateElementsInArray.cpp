// Ques :- Given an array of size n+1 consisting of integers from 1 to n. One of the element is duplicate in the array. Find that duplicate element.

// M1 - Brute Force 

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {6,3,2,4,1,7,1,5};  

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]==arr[j]){
                cout<<"The duplicate element is "<<arr[i];
                return 0;
            }
        }
    }
    return 0 ;
}