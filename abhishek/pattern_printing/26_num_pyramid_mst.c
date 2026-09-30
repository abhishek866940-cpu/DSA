/*
   1
  121
 12321
1234321         */
#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= 4-i ; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++){
            printf("%d",k);
        }
        for(int m = 1 ;m < i ; m++ ){
            printf("%d",i-m);
        }
        printf("\n");
    }
    return 0 ;
}