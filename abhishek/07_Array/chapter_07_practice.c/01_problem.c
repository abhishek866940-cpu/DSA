/*1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the array.*/
#include<stdio.h>
int main(){
    int arr[10]={5,6,7,3,8,3,6,4,8,1};
    int* ptr = &arr[0]; // or int* ptr = arr ;
    printf("The value at arr[0] is %d\n",*ptr);
    printf("The value at arr[2] is %d\n",*(ptr+2));
    return 0 ;
}  