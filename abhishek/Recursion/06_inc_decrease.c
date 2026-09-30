#include<stdio.h>
void increase_decrease(int x , int n){
    if(n==0) return ;
    printf("%d\n",x);
    increase_decrease(x+1,n-1);
    printf("%d\n",x);

}
int main (){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    increase_decrease(1,n);
}