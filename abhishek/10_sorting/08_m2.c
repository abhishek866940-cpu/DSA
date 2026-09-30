#include<stdio.h>
int main(){
    int arr[] = {5,0,2,0,0,4,1,3,0};
    int n = 9 ;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++ ){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    printf("The ans is \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}
//Both time complexity and space complexity is of O(1).