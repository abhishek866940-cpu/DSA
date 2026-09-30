#include<stdio.h>
int main(){
    int n; 
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[10] ;
    for(int i = 0 ; i < 10; i++){
        arr[i] = n*(i+1);
        printf("The value of %d X %d is %d\n",n,i+1,arr[i]);
    }
    return 0 ;

}