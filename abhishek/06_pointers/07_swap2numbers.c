#include<stdio.h>
void swap(int* , int*);
void swap(int* x , int* y){
    int temp;
    temp = *x ;
    *x = *y ;
    *y = temp ;
    
}

int main(){
    int a = 4 , b = 6 ;
    swap(&a,&b);
    printf("The value of a and b is %d and %d\n",a,b);   

    return 0 ;
}