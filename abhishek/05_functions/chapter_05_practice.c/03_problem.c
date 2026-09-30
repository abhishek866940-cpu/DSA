/*Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g = 9.8m/s?.'*/
#include<stdio.h>
float force(int);
float force(int m){
    float g = 9.8;
    return m*g;
}
int main(){
    int mass ;
    printf("Enter the mass : ");
    scanf("%d",&mass);
    printf("The force of attraction of %d is %f\n ",mass,force(mass));

    return 0 ;
}