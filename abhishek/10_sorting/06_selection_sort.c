#include<stdio.h>
#include<limits.h>
int main(){
    int n ; 
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n-1 ; i++){
        int min = INT_MAX ;
        int minidx = -1 ;
        for(int j = i ; j < n ; j++){
            if(min>arr[j]) { min = arr[j] ;
            minidx = j ;
            }
        }
        if(arr[i]>arr[minidx]){
        int temp = arr[minidx] ;
        arr[minidx] = arr[i] ;
        arr[i] = temp ;
        }
    }
    printf("The sorted array is \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}
//selection sort is unstable.