//Given a matrix having 0-1 only,find the row with the maximum number of 1's,
#include<stdio.h>
int main(){
    int mat[3][4] = {{1,0,1,1},{0,0,0,1},{1,0,0,1}};
    int maxcount = 0 ;
    int index ; 
    for(int i = 0 ; i < 3 ; i++){
        int count = 0 ;
        for(int j = 0 ; j < 4 ; j++){
            if(mat[i][j] == 1){
                count++;
            }
        }
        if(maxcount<count){
            maxcount = count ;
            index = i ;
        }
    }
    printf("The max number of 1 is in %d row and it repeat %d ",index,maxcount);
    return 0 ;
}