//wave print(column wise)
/*
1 2 3           
4 5 6          ------>       7 4 1 2 5 8 9 6 3
7 8 9
*/
#include<stdio.h>
int main(){
    int r , c ;
    printf("Enter no. of rows ");
    scanf("%d",&r);
    printf("Enter no. of columns ");
    scanf("%d",&c);
    int mat[r][c];
    printf("Input elements of the matrix \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("wave printing(column-wise) \n");
    for(int j = 0 ; j < c ; j++ ){
        if(j%2==0){
            for(int i = r-1 ; i >= 0 ; i--){
                printf("%d ",mat[i][j]);
            }
        }
        else{
            for(int i = 0 ; i < r ; i++){
                printf("%d ",mat[i][j]);
            }
        }
    }
    return 0 ;
}