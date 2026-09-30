//Ques : Print the given pattern
    // 1
    // 1 3
    // 1 3 5 
    // 1 3 5 7


#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("%d ",2*j-1);
        }
        printf("\n");
    }
    return 0 ;
}
/*
method- 2 
for(int i = 1; i <=5 ; i++ ){
int a = 1 ; 
for(int j = 1 ; j<=i ; j++){
printf("%d ",a);
  a = a + 2 ;
}
  printf("\n");
}
*/