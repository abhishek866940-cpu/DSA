//Write a program containing a function which reverses the array to it.
//important question
#include<stdio.h>
void printarray(int arr[] ,int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reversearray(int arr[], int n){
    int temp;
    for(int i = 0 ; i < n/2 ; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp ;
    }
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    printarray(arr,6);
    reversearray(arr,6);
    printarray(arr , 6);
    return 0 ;
}