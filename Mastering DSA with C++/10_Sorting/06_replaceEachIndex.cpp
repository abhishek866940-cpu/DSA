// Given an array, arr[] containing 'n' integers, the task is to find an integer(say k) such that after replacing each and every index of the array by |aᵢ-k| where (i belong [1,n]), results in a sorted array.If no such integer exist that satisfies the above condition then return -1.

#include<iostream>
using namespace std ;

float max(float a , float b ){
    if(a >= b) return a ;
    else return b ;
}

float min(float a , float b){
    if(a < b) return a ;
    else return b ;
}

int main(){
    // vector<int> a = {5,3,10,3};
    vector<int> a = {5,3,10}; 
    int n = a.size();
    float kmax = (float)INT_MAX ;
    float kmin = (float)INT_MIN ;
    bool flag = true ;

    for(int i = 0 ; i < n-1 ; i++){
        if((a[i]- a[i+1]) >= 0){
            kmin = max(kmin,(a[i]+a[i+1])/2.0);
        }
        else if((a[i] - a[i+1]) < 0){
            kmax = min(kmax,(a[i]+a[i+1])/2.0);
        }
        if(kmin > kmax ){
            flag = false ;
            break ;
        }
    }
    if(flag == false) cout<<"not any k exists for the given array"<<endl ;
    else {
        int lower = ceil(kmin);
        int upper = floor(kmax);
        if(lower <= upper){
        cout<<"The range of k is ["<<lower<<","<<upper<<"]"<<endl;
        }
        else{
            cout<<"not any k exists for the given array"<<endl ;
        }
    } 
    return 0 ;
}