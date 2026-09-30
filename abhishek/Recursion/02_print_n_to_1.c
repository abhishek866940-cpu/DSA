#include<stdio.h>
int decrease(int);
int decrease(int a){
    if(a==0 ) return 0 ;
    else{
    printf("%d\n",a);
    return decrease(a-1);}
}
int main(){
    int n ; 
    printf("Enter a number : ");
    scanf("%d",&n);
    decrease(n);

    return 0 ;
}