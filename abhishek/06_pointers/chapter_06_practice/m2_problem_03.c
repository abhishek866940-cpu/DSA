#include<stdio.h>
int* sum(int a ,int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum of two numbers is %d\n",s);
    return ptr ;
}
float* average(int a ,int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average of two numbers is %f\n",avg);
    return ptr;
}
int main(){
    int a = 5 , b = 6 ;
    int* ptr1 ;
    float* ptr2;
    ptr1 = sum(a,b) ;
    ptr2 = average(a,b) ;
    printf("The address of sum is %p and of average %p ",ptr1,ptr2);

    return 0 ;
}