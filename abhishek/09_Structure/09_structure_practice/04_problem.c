//Write a program with a structure representing a complex number.
#include<stdio.h>
typedef struct complex {
    int i ;
    int j ;
}compo ;

int main(){
    compo c ={1,2};
    printf("Complex number is %d+%di\n",c.i,c.j);
    return 0 ;
}