#include<stdio.h>
int sum(int , int );
// dum hai toh x ki value change karke dikhao.
int sum(int a , int b){
    a = 6 ;//Sum function cannot change x using 'a' because copy of x is provided to 
    // sum in a.
    return a+b ;
}
/*Call by value
A copy of the variable's value is passed to the function.This means that any 
changes made to the variable within the function will not affect the original value.
*/
int main(){
    int x = 1 , y = 6 ;
    printf("The sum of 1 and 6 is %d\n",sum(x,y));
    printf("The value of x is %d\n",x);

    return 0;
}