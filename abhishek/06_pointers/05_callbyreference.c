#include<stdio.h>
int sum(int* , int*);
//sum should change the value of x.
int sum(int* a , int* b){
        *a = 6 ;
        return *a + *b ;
}
/*The address of the actual parameter is copied into the function's formal parameter.This 
 means that changes made to the formal parameter do directly affect the original parameter.
*/
int main(){
      int x = 1 , y = 6 ;
      printf("The sum of x and y is %d\n",sum(&x,&y));
      printf("The value of x after changing is %d\n",x);
    return 0 ;
}