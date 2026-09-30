#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> arr = {-5,4,0,3,26,1,99,-80};
    int n = arr.size();

    for(int i = 0 ; i < n-1 ; i++){
        bool flag = true ;  
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false ;    
            } 
        }
        if(flag) break ;
    }

    // printing the sorted array 

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}