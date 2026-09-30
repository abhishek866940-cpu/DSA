//Euler tour tree 
#include<stdio.h>
int fibo(int x){
    if(x == 1 || x == 2) return 1 ;
    return fibo(x-1) + fibo(x-2);
}
int main(){
    int n ;
    printf("Enter the position of the number in the fibonacci series : ");
    scanf("%d",&n);
    fibo(n);
    printf("The %dth term of the fibonacci series is %d\n",n,fibo(n));
    return 0 ;
}