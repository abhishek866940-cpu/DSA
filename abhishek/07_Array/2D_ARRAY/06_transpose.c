#include<stdio.h>
int main(){
    int r ,c ;
    printf("Enter the no. of rows ");
    scanf("%d",&r);
    printf("Enter number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The transpose of the given matrix is \n");
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}