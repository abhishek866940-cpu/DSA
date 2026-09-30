#include <stdio.h>
//function prototype
void sum(int , int);
//funtion definition
void sum(int a , int b){
    printf("The sum is %d\n",a+b);
    //return a+b;
}
int main(){
    int x = 0 , y = 0 ;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    sum(x,y);//invoking or calling
    //printf("Sum in main fucntion : %d",s);
    return 0;

}
