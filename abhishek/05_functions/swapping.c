#include<stdio.h>
int main(){
    int a = 5 , b = 3 ;
    printf("The values of a and b before swapping are %d and %d\n",a,b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("The values of a anf b after swapping are %d and %d\n",a,b);
    return 0 ;
}