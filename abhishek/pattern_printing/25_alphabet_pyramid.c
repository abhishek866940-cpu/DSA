/*
   A
  ABC
 ABCDE
ABCDEFG         */
#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= 4-i ; j++){
            printf(" ");
        }
        char ch = 'A'; 
        for(int k = 1 ; k <= 2*i-1 ; k++){
            printf("%c",ch);
            ch++;

        }
        printf("\n");
    }
    return 0 ;

}