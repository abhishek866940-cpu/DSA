#include<stdio.h>
int main(){
    int n,m;
    printf("Number of rows ");
    scanf("%d",&n);
    printf("Number of star in each row is ");
    scanf("%d",&m);
    for(int i = 0 ; i < n ; i++){    //outer loop = no. of lines
        for(int i = 0 ; i < m ; i++){   //inner loop = no. of stars in each line.
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}