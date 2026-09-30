//swapping of two numbers using array.
#include<stdio.h>
void swap(int x[]){
    int temp ;
    temp = x[0];
    x[0] = x[1];
    x[1] = temp ;
    return ;
}
int main(){
    int arr[2] = {2,6};
    printf("Before swapping %d and %d\n",arr[0],arr[1]);
    swap(arr);
    printf("After swapping %d and %d\n",arr[0],arr[1]);
    return 0 ;
}