/*
   A
  ABA
 ABCBA
АВСDСВА
*/
#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= 4-i ; j++){
            printf(" ");
        }
        char ch = 'A';
        for(int k = 1 ; k <= i ; k++){
            printf("%c",ch);
            ch++;
        }
        char nsp = 'A';
        for(int m = 1 ;m < i ; m++ ){
            printf("%c",nsp);
            nsp++;
        }
        printf("\n");
    }
    return 0 ;
}