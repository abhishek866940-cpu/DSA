#include<stdio.h>
int main(){
    int arr[8] = {43,435,-43,65,43,-3,5,-56};
    int min = arr[0];
    for(int i = 0 ; i < 8 ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("The smallest number is %d\n",min);
    return 0 ;
}