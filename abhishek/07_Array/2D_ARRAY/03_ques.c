/*Given a matrix 'a' of dimension  m*n and 2 coordinates (l₁,r₁) and (l₂,r₂).Return 
the sum of the rectangle from (l₁,r₁) to (l₂,r₂).
*/
#include<stdio.h>
int main(){
    int r , c ;
    printf("Enter number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l1,r1,l2,r2 ;
    printf("Enter coordinates of rectangle ");
    scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
    int sum = 0 ;
    if(l1>=0 && l2<=r &&r1>=0 && r2<=c && l1<=l2 && r1 <= r2){
    for(int i = l1 ; i <= l2 ; i++ ){
        for(int j = r1 ; j <= r2 ; j++){
            sum += arr[i][j];
        }
    }
       printf("Sum of elements from (%d,%d) to (%d,%d) is %d \n",l1,r1,l2,r2,sum);
}
else{
    printf("not possible");
}
 
   
    
    return 0 ;

}