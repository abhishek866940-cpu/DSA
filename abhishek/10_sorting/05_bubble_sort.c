//if size of the array is n then no. of passes will be (n-1).
/*
After every pass we need to apply bubble sort on the unsorted elements only &
No need to check the largest.
*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n ; 
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(int i = 0 ; i < n-1 ; i++){            //no. of passes   
        bool flag = true ; // let array is sorted.
        for(int j = 0 ; j < n-1-i ; j++){           //do swapping
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                flag = false ;
            }
        }
        if(flag==true) break ;
    }
    printf("Array after sorted is \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}
//bubble sort is stable. 
/*
                        time complexity             space complexity
best case      --->         O(n)                            O(1)
average case   --->         O(n²)                           O(1)
worst case     --->         O(n²)                           O(1)
*/