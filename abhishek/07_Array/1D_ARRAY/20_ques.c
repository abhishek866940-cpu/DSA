/*Given an array containing elements from 1 to n except one in this range
is missing.find the missing element.
*/
#include<stdio.h>
void filling(int arr[],int x){
    for(int i = 0 ; i < x-1 ; i++){
        scanf("%d",&arr[i]);
    }
}
int main(){
    int n ;
    printf("Number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    filling(arr,n);
    int sum1 = 0 ;
    for(int i = 0 ; i <= n-2 ; i++){
        sum1 += arr[i];
    }
    int sum2 = n*(n+1)/2;
    int missing_element = sum2 - sum1 ;
    printf("The missing element from 1 to %d is %d\n",n,missing_element);

    return 0 ;
}