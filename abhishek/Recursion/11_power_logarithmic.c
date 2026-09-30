// here function call itself log₂b .
#include<stdio.h>
int powerlog(int a , int b ){
    if(b==0) return 1 ;
    int x = powerlog(a,b/2);
    if(b%2==0) return x*x ; 
    else return x*x*a ;
}
int main(){
    int n , m ;
    printf("Enter base : ");
    scanf("%d",&m);
    printf("Enter power : ");
    scanf("%d",&n);
    powerlog(m,n);
    printf("Value of %d is raised to the power of %d is %d\n",m,n,powerlog(m,n));
    return 0 ;
}