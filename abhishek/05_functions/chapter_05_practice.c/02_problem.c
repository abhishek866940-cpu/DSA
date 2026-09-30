//Write a function to convert Celsius temperature into fahreneit.
#include<stdio.h>
float fah(int);
float fah(int C){
    return 1.8*C + 32 ;
}
int main(){
    int a = 45 ;
    printf("Temperature in Fahreneit is %0.2f\n",fah(a));

    return 0 ;
}