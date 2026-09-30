//Given an array and a number.check that the given number is present in array or not.
//Print its index also.
#include<stdio.h>
int main(){
    int x ;
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[] = {4,21,43,56,86,5,9,65};
    for(int i = 0 ; i < 8 ; i++){
        if(arr[i]==x){
          printf("%d is present in the array at index %d",x,i);
            break ;
        }
    } 
  }