//wave print(row wise wave)
/*
1 2 3                        1 2 3
4 5 6      --------->        6 5 4   or    1 2 3 6 5 4 7 8 9
7 8 9                        7 8 9   
*/
#include<stdio.h>
int main(){
    int r , c ;
    printf("Enter no. of rows in matrix ");
    scanf("%d",&r);
    printf("Enter no. of columns in matrix ");
    scanf("%d",&c);
    int mat[r][c];
    printf("Input elements of the matrix \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("wave printing(row-wise) \n");
    for(int i = 0 ; i < r ; i++){
        if(i%2==0){
            for(int j = 0 ; j < c ; j++){
                printf("%d ",mat[i][j]);
            }
        }
        else{
            for(int j = c-1 ; j >= 0 ; j--){
                printf("%d ",mat[i][j]);
            }

        }
    }

    return 0 ; 
}