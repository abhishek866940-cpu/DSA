#include<stdio.h>
union demo {     //Union is same as structure...diff is given below
    int a;       //All the union members share the same memory allocation. 
    char b;      //whereas all members have different memory allocation.
    float c;
}U;
int main(){
    union demo *ptr = &U ;
    U.a=10;
    U.b=20;
    U.c=30.5;
    printf("%d\n",ptr->a);
    printf("%c\n",ptr->b);
    printf("%f\n",ptr->c);

    return 0 ;
}