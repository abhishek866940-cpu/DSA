//maximum element in the array
#include<stdio.h>
int main(){
    int arr[8] = {23,32,5,45,76,97,23,65};
    int max = arr[0] ;
    for(int i = 0 ; i < 8 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The largest element in the array is %d",max);

    return 0 ;

}