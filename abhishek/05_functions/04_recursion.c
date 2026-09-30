//factorial
#include<stdio.h>
int factorial(int);
int factorial(int x){
    if(x==0 || x== 1){
        return 1;
    }
    else
    return factorial(x-1)*x;
}
int main(){
    int a = 5 ;
    printf("The factorial of %d is %d\n",a,factorial(a));
    return 0;
}