/*
1
3 5
7 9 11
13 15 17 19
*/
#include<stdio.h>
int main(){
    int a = 0 ;
    for(int i = 1 ; i<=4 ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("%d ",2*a+1);
            a++;
        }
        printf("\n");
    }
    return 0 ;
}