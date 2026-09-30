//Rotate an array by 90 degree clockwise.
#include<stdio.h>
void rev(int arr[100][100],int x , int y ){
        for(int i = 0 ; i < x ; i++){
            int j = 0 ;
            int k = y-1 ;
            while(j<k){
                int temp = arr[i][j];
                arr[i][j] = arr[i][k];
                arr[i][k] = temp ; 
                j++ ; 
                k-- ;
            }
    }
}
int main(){
    int r , c ;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the number of elements of matrix  \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[100][100];
    printf("Transpose of the given matrix is \n");
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            brr[i][j] = arr[j][i] ;
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    rev(brr,c,r);
    printf("Matrix after rotating 90 degree clockwise \n");
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            printf("%d ",brr[i][j]);

        }
        printf("\n");
    } 
    return 0 ;
}