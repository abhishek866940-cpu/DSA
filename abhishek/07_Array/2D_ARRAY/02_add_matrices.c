#include<stdio.h>
void input(int arr[][100] , int x ,int y){  //all the dimensions sholud be fixed except 1st dimension in C.
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void add(int mat1[][100] , int mat2[][100],int mat3[][100] , int x , int y){ 
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            mat3[i][j] += mat1[i][j] + mat2[i][j] ;
        }
    }
}
int main(){
    int r1 ,r2 ,c1 ,c2 ; 
    printf("Enter number of rows in 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter number of columns in 1st matrix : ");
    scanf("%d",&c1);
    int mat1[r1][c1];
    input(mat1,r1,c1);
    printf("Enter number of rows in 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter number of columns in 2nd matrix : ");
    scanf("%d",&c2);
    int mat2[r2][c2];
    input(mat2,r2,c2);
    int mat3[100][100];
    if(r1==r2 && c1==c2){
        add(mat1,mat2,mat3,r1,c1);
        printf("The addition of two matrix is \n");
    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j < c1 ; j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    }
    else {
        printf("The addition of the given matrix isn't possibe \n");
    }
    return 0 ;
}