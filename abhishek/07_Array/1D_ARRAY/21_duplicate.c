#include<stdio.h>
int main(){
    int arr[] = {1,9,7,6,8,4,4,5};
    for(int i = 0 ; i < 8 ; i++){
        for(int  j = i+1 ; j < 8 ; j++){
            if(arr[i]==arr[j]){
                printf("The duplicate element is %d\n",arr[i]);
                break;
            }
        }
    }
    return 0 ;
}