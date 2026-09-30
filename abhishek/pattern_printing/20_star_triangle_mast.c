/*
   *
  **
 ***
****
                                        */
#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= 4-i ; j++){     // for spaces
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++){        // for star 
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}