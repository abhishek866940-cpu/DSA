#include<stdio.h>
int main(){
    int n ,product = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        product *= arr[i];
    }
    printf("The product of all elements in the array is %d\n",product);
    return 0 ;
}