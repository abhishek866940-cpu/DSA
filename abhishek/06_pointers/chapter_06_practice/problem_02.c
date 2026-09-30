//Write a program to change the value of a variable to ten times of its current value.
#include<stdio.h>
void change_to_ten_times(int*);
void change_to_ten_times(int* x){
    *x = *x*10;
}
int main(){
    int a = 10 ;
    printf("The value of a is %d\n",a);
    change_to_ten_times(&a);
    printf("Now the value of a is %d\n",a);
    return 0;
}