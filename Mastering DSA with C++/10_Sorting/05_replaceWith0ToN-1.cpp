// Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1.The order of the elements should be same.
// i.e., 0 is placed in the place of smallest element,1 is placed at second smallest element...and so on

#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main(){
    vector<int> arr = {19,12,23,8,16}; // elements can be either positive or negative or 0 
    vector<int> v(5,0) ;  // 0 for not visited
    int x = 0 ;
    
    for(int i = 0 ; i < arr.size() ; i++){
        int min = INT_MAX ;
        int minidx = -1 ;
        for(int j = 0 ; j < arr.size(); j++){
            if(v[j]==1) continue ;
            else{
                if(arr[j] < min){
                    min = arr[j];
                    minidx = j ;
                }
            }
        }
        arr[minidx] = x ;
        x++;
        v[minidx] = 1 ;
    }

        for(int ele : arr){
            cout<<ele<<" ";
        }
    return 0 ;
}

// TC :- O(n^2)
// SC :- O(n)