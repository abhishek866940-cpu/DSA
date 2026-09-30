#include<stdio.h>
int main(){
    int r1,c1,r2,c2 ;
    printf("Enter No. of rows in first matrix ");
    scanf("%d",&r1);
    printf("Enter No. of columns in first matrix ");
    scanf("%d",&c1);
    int mat1[r1][c1];
    printf("Input of first matrix \n");
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j < c1 ; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter no. of rows in second matrix ");
    scanf("%d",&r2);
    printf("Enter no. of columns in second matrix ");
    scanf("%d",&c2);
    int mat2[r2][c2];
    printf("Input of second matrix \n");
    for(int i = 0 ; i < r2 ; i++){
        for(int j = 0 ; j < c2 ; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
     int res[r1][c2] ;
    if(c1!=r2){
        printf("Matrix multiplication is not possible ");
    }
    else{
            for(int i = 0 ; i < r1 ; i++){
                for(int j = 0 ; j < c2 ; j++){
                    res[i][j] = 0 ;
                    for(int k = 0 ; k < c1 ; k++){
                        res[i][j] += mat1[i][k]*mat2[k][j] ;
                    }
                }
            }
    printf("The multiplication of given matrix is \n");
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j < c2 ; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
     }
    }
    
    return 0 ;
}