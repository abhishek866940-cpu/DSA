// Ques :- Given an array of size n+1 consisting of integers from 1 to n. One of the element is duplicate in the array. Find that duplicate element.

#include<iostream>
using namespace std ;
int main(){
    int arr[] = {6,3,2,4,1,7,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = (n*(n-1))/2 ;
    int sum_arr = 0 ;

    for(int i = 0 ; i < n ; i ++){
        sum_arr += arr[i];
    }

    int duplicate = sum_arr - sum ;

    cout<<"The duplicate element is "<<duplicate<<endl;
    return 0 ;
}