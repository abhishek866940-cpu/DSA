#include<stdio.h>
int main(){
    char arr[5] = {'a','b','t','s','q'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0 ;
}
// char ---> 1 byte = 8 bits 
// range ---> 0 to 2⁸ - 1 
// and int ---> 4 bytes = 32 bits 
// range ---> -2⁽ⁿ⁻¹⁾ to 2⁽ⁿ⁻¹⁾ - 1 
