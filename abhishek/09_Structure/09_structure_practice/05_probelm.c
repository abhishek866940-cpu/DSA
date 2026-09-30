//Create an array of 5 complex numbers created in Problem 4 and display them with the 
//help of a display function. The values must be taken as an input from the user.
#include<stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;
void display(complex c){
    printf("The complex number is %d+%di",c.real,c.imaginary);
}

int main(){
    complex c[5];
    for(int i = 0 ; i<5 ; i++){
        scanf("%d %d",&c[i].real,&c[i].imaginary);
        display(c[i]);
    }
    return 0 ;
}
