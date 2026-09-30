/*Write a program containing functions Which counts the
 number of positive integers in an array.*/
#include<stdio.h>
int count(int arr[], int n ){
    int no_of_positive_integers = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>0)
        no_of_positive_integers++;
    }
    return no_of_positive_integers;
}
int main(){
    int arr[] = {1,-2,3,4,-5,-6,7,8,9,10} ;
    printf("The number of positive integers are %d\n",count(arr,10));
    return 0 ;
}