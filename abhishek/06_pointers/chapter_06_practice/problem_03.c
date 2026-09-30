/*Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values sum and average in main()*/
#include<stdio.h>
void function(int*,int*,int*,int*,int*,int*,int*);
void function(int* x,int* y,int* z,int* w,int* v,int* sum,int* avg){
    *sum = (*x+*y+*z+*w+*v);
    *avg = (*x+*y+*z+*w+*v)/5.0;
}
int main(){
    int a,b,c,d,e,sum,avg;
    printf("Enter the value of a is ");
    scanf("%d",&a);
    printf("Enter the value of b is ");
    scanf("%d",&b);
    printf("Enter the value of c is ");
    scanf("%d",&c);
    printf("Enter the value of d is ");
    scanf("%d",&d); 
    printf("Enter the value of e is ");
    scanf("%d",&e);
    function(&a,&b,&c,&d,&e,&sum,&avg);
    printf("The sum of five numbers is %d\n",sum);
    printf("The average of five numbers is %d\n",avg);
    return 0;
}