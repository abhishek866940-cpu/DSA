//Given a positive no. n,generate a n*n matrix filled with elements from 1 to n²
// in spiral order.
#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int mat[n][n] ;
    int tne = n*n ;
    int count = 0 ;
    int minc = 0 ;
    int maxc = n-1 ;
    int minr = 0 ;
    int maxr = n-1 ;
    int val = 1 ;
    while(count<tne){
        for(int j = minc ; j <= maxc && count<tne ; j++){
            mat[minr][j] = val ;
            val++;
            count++;
        }
        minr++;
        for(int i = minr ; i <= maxr && count<tne ; i++){
            mat[i][maxc] = val ;
            val++ ;
            count++;
        }
        maxc--;
        for(int j = maxc ; j >= minc && count<tne ; j--){
            mat[maxr][j] = val ;
            val++;
            count++;
        }
        maxr--;
        for(int i = maxr ; i >= minr && count<tne ; i--){
            mat[i][minc] = val;
            val++; 
            count++;
        }
        minc++;
    }
    printf("The matrix in spiral form is \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}
/*coupon code
f
DEEKUM0022
ANAHAS0001
SHOSID0001
NIKSHR0002
UPEPAT0001
*/
//KUNBS for pw skills
//SRIPAN0001
//SHASHA0015
//MD0SAM0001