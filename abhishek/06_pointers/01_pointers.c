#include<stdio.h>
int main(){
    int i = 7 ;
    int* j = &i ; // j is a integer pointer pointing to i.
    //printf("The address of i is %u\n",&i) ; %u is for unsigned int.
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value at i is %d\n",*j);
    printf("The value at i is %d\n",*(&i));
 

    return 0; 
}