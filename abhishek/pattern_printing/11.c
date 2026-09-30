/*
1
A B
1 2 3 
A B C D 
1 2 3 4 5 
*/
#include<stdio.h>
int main(){
    for(int i = 1 ; i <=5 ; i++){
        char ch = 'A';
        for(int j = 1 ; j<=i ; j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            if(i%2==0){
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0 ;
}