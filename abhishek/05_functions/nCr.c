#include<stdio.h>
int factorial(int x){
    int fact = 1 ;
    for(int i = 2 ; i <= x ; i++){
        fact = fact*i ;
    }
    return fact;

}
int combination(int a , int b , int c){
    int ncr = a/(b*c);
    return ncr ;
}

int main(){
    int n ,r ;
    printf("Enter the number n = ");
    scanf("%d",&n);
    printf("Enter the number r = ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    //printf("%d\n",nfact);
    //printf("%d\n",rfact);
    //printf("%d\n",nrfact);
    int ncr = combination(nfact,rfact,nrfact);
    printf("The value %dC%d is %d\n",n,r,ncr);

    return 0 ;
}
