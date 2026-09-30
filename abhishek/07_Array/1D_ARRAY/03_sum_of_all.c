//Sum of all elements in the array.
#include<stdio.h>
int main(){
    int n ,sum = 0; 
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("The sum of all elements in the array is %d",sum);
    return 0 ;
}