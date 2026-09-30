/*
   *
  ***
 *****
*******
                             */
//using a third variable.
#include<stdio.h>
int main(){
    int nsp = 3 ;
    int nst = 1 ;
    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= nsp ; j++){
            printf(" ");
        }
        nsp--;
        for(int k = 1 ; k <= nst ; k++){
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0 ;
}