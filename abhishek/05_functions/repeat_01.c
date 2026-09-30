#include<stdio.h>
int sum(int , int );
int sum(int x ,int y ){
    printf("the sum is %d\n",x+y);
    return x+y;
}

int main(){
    int a = 0, b = 0;
printf("enter two values");
scanf("%d %d",&a,&b);
int s = sum(a,b);

    return 0; 
}