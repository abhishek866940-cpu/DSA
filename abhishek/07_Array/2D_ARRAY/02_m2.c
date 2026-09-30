// add two matrix without using third matrix
#include<stdio.h>
void input(int mat[100][100],int x , int y ){
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
int main(){
    int r1,r2,c1,c2 ;
    printf("Enter the rows of 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter the columns of 1st matrix : ");
    scanf("%d",&c1);
    int mat1[100][100];
    input(mat1,r1,c1);
    printf("Enter the rows of 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter the columns of 2nd matrix : ");
    scanf("%d",&c2);
    int mat2[100][100];
    input(mat2,r2,c2);
    if(r1==r2 && c1==c2){
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c1 ; j++){
                mat1[i][j] += mat2[i][j];
                printf("%d ",mat1[i][j]);
            }
            printf("\n");
        }
    }
    return 0 ;
}