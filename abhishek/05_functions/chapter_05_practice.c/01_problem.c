//Write a program using function to find average of three numbers.
#include<stdio.h>
float avg(int,int,int);
float avg(int x,int y,int z){
    return (x+y+z)/3.0;
}
int main(){
    int a = 4 , b = 5 , c = 8 ; 
    float s = avg(a,b,c);
    printf("The average of the three given numbers are %f\n",s);

    return 0 ;
    
}