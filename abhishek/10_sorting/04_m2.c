//Array must be sorted.
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,8,9,10};
    int target = 8 ;
    int i = 0 ; 
    int j = 7 ;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("The two no. whose sum is equal to %d are %d and %d\n",target,arr[i],arr[j]);
            break ;
        }
        else if(arr[i]+arr[j]>target){
            j-- ;
        }
        else if(arr[i]+arr[j]<target){
            i++ ;
        }
    }
    return 0 ;
}
//Time complexity is efficient.