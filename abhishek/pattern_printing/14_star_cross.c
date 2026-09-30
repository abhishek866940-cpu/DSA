/*
           *       *
             *   * 
               *                     // n should be odd.
             *   *
           *       *  
*/
#include<stdio.h>
int main(){
    int n ;
    printf("Enter a odd number of line ");
    scanf("%d",&n);
    if(n%2==0){
    printf("Enter the odd number of lines please ");
    }
    else{
    int i , j ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            if(i == j || i+j==n+1)
            printf("*"); 
            else
            printf(" ");
        }
        printf("\n");
    }
}
    return 0 ;
}