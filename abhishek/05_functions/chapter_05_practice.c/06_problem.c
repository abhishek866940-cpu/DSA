//Write a recursive function to calculate the sum of first 'n' natural numbers.
#include<stdio.h>
float sum(int);
float sum(int n){
    if(n==1){
        return 1;
    }else{        // sum(n) = sum(n-1)+ n
    return sum(n-1) + n; 
}
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers are %.2f\n",num,sum(num));
    return 0;
}