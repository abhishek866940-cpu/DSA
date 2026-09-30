/*
Given an integer array arr,move all 0's to the end of it while mantaining the 
relative order of the non-zero elements.
*/
#include<stdio.h>
int main(){
    int arr[] = {5,0,2,0,0,4,1,3,0};
    int ans[9];
    int idx = 0 ;
    for(int i = 0 ; i < 9 ; i++){
        if(arr[i]!=0){
            ans[idx] = arr[i];
            idx++;
        }
    }
    for(int i = idx ; i < 9 ; i++){
        ans[i] = 0 ;
    }
    for(int i = 0 ; i < 9 ; i++){
        printf("%d ",ans[i]);
    }
    return 0 ;
}
//time complexity  ---> O(n)
//space complexity ---> O(n)