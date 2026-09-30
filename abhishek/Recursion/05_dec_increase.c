#include<stdio.h>
void decrease_increase(int n){
    if(n==0) return ;
    printf("%d\n",n);
    decrease_increase(n-1);
    printf("%d\n",n);
}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    decrease_increase(n);

    return 0 ;
}