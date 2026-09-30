//Count the no. of triplets whose sum is equal to given value of x.
//also print the pairs.
#include<stdio.h>
int main(){
    int n , x ;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    printf("Enter a number :");
    scanf("%d",&x);
    int arr[n];
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1 ; k < n ; k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                } 
            }
        }
    }
    printf("The number of triplets is %d\n",count);
    return 0 ;
}