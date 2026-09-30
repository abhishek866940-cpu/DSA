//only single ,double and triple step allowed.
#include<stdio.h>
int stairs(int x){
    if(x<=2) return x ;
    if(x==3) return 4 ;
    return stairs(x-1) + stairs(x-2) + stairs(x-3) ; 
}
int main(){
    int n ; 
    printf("Number of stairs is : ");
    scanf("%d",&n);
    stairs(n);
    printf("Total ways %d",stairs(n));
    return 0 ;
}