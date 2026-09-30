#include<stdio.h>
int main(){
    int r , c ;
    printf("Enter no. of rows ");
    scanf("%d",&r);
    printf("Enter no. of columns ");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the elements of the matrix \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int minr = 0 ;
    int maxr = r-1 ;
    int minc = 0 ;
    int maxc = c-1 ;
    int count = 0 ;
    int tne = r*c ;
    printf("The spiral order of the given matrix is \n");
    while(count<tne){
        for(int j = minc ; j<=maxc && count<tne ; j++){
            printf("%d ",mat[minr][j]);
            count++ ; 
        }
        minr++ ;
        for(int i = minr ; i<=maxr && count<tne ; i++){
            printf("%d ",mat[i][maxc]);
            count++ ;
        }
        maxc-- ;
        for(int j = maxc ; j>=minc && count<tne ; j--){
            printf("%d ",mat[maxr][j]);
            count++;
        }
        maxr-- ;
        for(int i = maxr ; i>=minr && count<tne ; i--){
            printf("%d ",mat[i][minc]);
            count++ ;
        }
        minc++ ;
    } 

    return 0 ; 
}