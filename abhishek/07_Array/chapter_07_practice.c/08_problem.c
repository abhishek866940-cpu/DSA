/*Create a three-dimensional 
array and print the address of its elements in increasing order.*/
#include<stdio.h>
int main(){
     int arr[2][3][4];
    int* ptr = &arr[0][0][0] ;
   
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 4 ; k++){
                printf("The address of the arr[%d][%d][%d] is %u\n",i,j,k,ptr);
                ptr++;
            }
        }
    } 
    return 0 ;
}
