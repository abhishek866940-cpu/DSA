#include<stdio.h>
int main(){
    int arr[] = {4,76,23,1,3,4,6,7,9};
    int max = arr[0];
    for(int i = 0 ; i < 9 ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("The maximum in the array is %d\n",max);
    int smax = arr[0];
    for(int i = 0 ; i < 9 ; i++){
        if(smax < arr[i] && arr[i] != max){
                smax = arr[i];
        }
    }
    printf("The second maximum in the array is %d\n",smax);

    return 0 ;
}