#include<stdio.h>
int main(){
    // Pointer arithmetic using integerpointer.
    /*   int i = 5;
         int* ptr = &i ;
         printf("The address of i is %u\n",ptr);  
         printf("The address of i is %u\n",&i);
         ptr++;
         printf("The value of ptr is %u \n",ptr);  */
    // Pointer arithmetic using character pointer.
    char i = 'A';
    char* ptr = &i ;
    printf("The address of i is %u\n",ptr);
    printf("The address of i is %u\n",&i);
    ptr++;
    printf("The value of ptr is %u \n",ptr);
    return 0 ;
}