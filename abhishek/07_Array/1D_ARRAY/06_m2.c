#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {0,-4,-45,-456,34,7,87,23};
    int min = INT_MAX;
    for(int i = 0 ; i < 8 ; i++){
        if(min>arr[i]){
        min = arr[i];
        }
    }
    printf("The smallest number in the given array is %d\n",min);
    return 0 ;
}