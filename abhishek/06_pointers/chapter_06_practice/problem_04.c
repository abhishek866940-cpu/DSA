//Write a program having a variable 'i'. Print the address of 'i'. 
//Pass this variable to a function and print its address. Are these addresses same?
#include<stdio.h>
int returning(int* x){
    printf("The address of a is %p\n ",x);
    printf("The value at ptr is %d\n",*x);
    return 5 ;
}
int main(){
    int i = 5 ;
    int* ptr = &i;
    printf("The address of a is %p\n",ptr);
    returning(ptr);
    

    return 0 ;
}