/*
1234567
123 567
12   67
1     7
n = 3; 
*/
#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1 ; i <= 2*n+1 ; i++){
        printf("%d",i);
    }
    printf("\n");
    int nsp = 1 ;
    int a = n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= a; j++){
            printf("%d",j);
        }
        for(int k = 1 ; k <= nsp ; k++){
            printf(" ");
        }
        for(int m = 1 ; m <= a ; m++ ){
            printf("%d",m+i+n);
        }
        nsp+=2;
        a--;
        printf("\n");
    }
    return 0 ;
}