#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {234,42,65,243,732,53,34,12};
    int max = INT_MIN ;
    for(int i = 0 ; i < 8 ; i++){
        if(max<arr[i]){
        max = arr[i];
        }
    }
    printf("The largest number in the given array is %d\n",max);
    return 0 ;
}