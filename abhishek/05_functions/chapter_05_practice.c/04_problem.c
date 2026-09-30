//Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}
int main(){
    int x;
    printf("Enter the position of fibonacci series : ");
    scanf("%d",&x);
    printf("The %dth term of fibonacci series is %d\n",x,fibonacci(x));


    return 0 ;
}