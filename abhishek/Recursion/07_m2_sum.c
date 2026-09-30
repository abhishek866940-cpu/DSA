#include<stdio.h>
int sum(int n){
    if(n==1) return 1 ;
    return sum(n-1) + n ;

}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    sum(n);
    printf("The sum of upto to %dth number is %d\n",n,sum(n));
    return 0 ;
}