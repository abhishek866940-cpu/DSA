#include<stdio.h>
int min(int a , int b ){
    if(a<b) return a ;
    else return b ;
}
int hcf(int a , int b){
    int hcf ;
    for(int i = 1 ; i <= min(a,b) ; i++){ 
        if(a%i==0 && b%i==0){
            hcf = i ;
        }
    }
    return hcf ;
}
int main(){
    int a , b ;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("The HCF/GCD of %d and %d is %d\n",a,b,hcf(a,b));
    return 0 ;
}