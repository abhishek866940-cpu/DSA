/*
*********
**** ****
***   ***
**     **
*       *
n = 4 
*/
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1 ; i <= 2*n+1 ; i++){
        printf("*");
    }
    int nst = n ;
    int nsp = 1 ;
    printf("\n");
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= nst ; j++ ){
            printf("*");
        }
        for(int k = 1 ; k <= nsp ; k++){
            printf(" ");
        }
        for(int j = 1 ; j <= nst ; j++ ){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");


    }
    return 0 ;

}