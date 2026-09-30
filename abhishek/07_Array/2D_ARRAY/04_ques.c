//WAP to print the row number having maximum in a given matrix.
#include<stdio.h>
#include<limits.h>
int main(){
    int r = 3, c = 3 ;
    int arr[r][c] ;
    int maxsum = INT_MIN , index;
    for(int i = 0 ; i < r ; i++){
      int sum = 0 ;
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&arr[i][j]);
            sum += arr[i][j] ;
        }   
         if(maxsum < sum) {maxsum = sum ; 
            index = i ; }
    }
    printf("The maximum sum is in %d row is %d\n",index,maxsum);
   

    return 0 ;
}