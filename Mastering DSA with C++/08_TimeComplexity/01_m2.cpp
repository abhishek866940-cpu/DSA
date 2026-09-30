// Ques :- Given an array of size n+1 consisting of integers from 1 to n. One of the element is duplicate in the array. Find that duplicate element.

// M2 - Good method and it saves time but we are using extra space.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {6,3,2,4,1,7,1,5} ;
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(n,0);

    for(int i = 0 ; i < n ; i++ ){
        if(v[arr[i]] == 0) v[arr[i]] = 1 ;
        else{
            cout<<"The duplicate element in the array is "<<arr[i];
        }  
    }
    return 0 ;
}