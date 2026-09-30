#include<stdio.h>
int main(){
    int arr[5] = {0,2,1,1,3};
    for(int i = 0 ; i<=4 ; i++){
        printf("The addresses of arr[%d] is %p \n",i,&arr[i]);
    }
    return 0 ;
}