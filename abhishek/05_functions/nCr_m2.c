//using mathematics 
//nC(r+1) = nCr + (n-r)/(r+1)
#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the number : ");
    scanf("%d",&n);
    int nsp = n ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < nsp ; j++){
            printf(" ");
        }
        int first = 1 ;
        for(int k = 0 ; k <= i ; k++){
            printf("%d ",first);
            first = first* (i-k)/(k+1);
        }
        printf("\n");
        nsp--;
    }
    return 0 ;
}