#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int brr[8];
    for(int i = 0 ; i < 8 ; i++){
        brr[i] = arr[8-1-i];   //n-1-i ;
        printf("%d ",brr[i]);
    }
    
    return 0 ;
}