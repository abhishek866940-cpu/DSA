//Write a program to print the address of a variable. Use this address to get the value of the variable.
#include<stdio.h>

int main(){
    int a = 5 ;
    int* j = &a;
    printf("The address of the variable is %p\n",&a);
    printf("The address of the variable is %u\n",j);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*j); 

    return 0 ;
}