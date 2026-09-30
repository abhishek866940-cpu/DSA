//VVVVIP
#include<stdio.h>
void increasing(int x){
    if(x==0) return ;
    increasing(x-1);  //the return statement exits the function immediately, so the printf is never executed.
    printf("%d\n",x);
    
}
int main(){
    int n ;
    printf("Enter a Number : ");
    scanf("%d",&n);
    increasing(n);
    return 0 ;
}