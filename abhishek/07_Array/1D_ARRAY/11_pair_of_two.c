//Find the total number of pairs in the array whose sum is equal to the given value x.
//also print the pairs.
#include<stdio.h>
int main(){
    int n , x;
    printf("Enter the no. of elements in array : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[n];
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]+arr[j]==x){
                 count++;
                 printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("Number of pairs is %d\n",count);
    return 0 ;
}