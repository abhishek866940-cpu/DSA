#include<stdio.h>
int power(int a , int b ){
    if(b==0) return 1 ;
    return  a*power(a,b-1);  // b calls.If b = 100 then fn call itself 100 times.
}
int main(){
    int a , b ;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    power(a,b);
    printf("Value of %d is raised to the %d is %d\n",a,b,power(a,b));
    return 0 ;
}