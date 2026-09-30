/*
      *
    * *
  * * *
* * * *
                                            */
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    int a = n-1 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=a ; j++ ){
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 1 ;
}                                           