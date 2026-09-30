#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,9,6,7,8,9};
    int sum1 = 0 ;
    int sum2 = (9*(9+1))/2 ;
    for(int i = 0 ; i < 10 ; i++){
        sum1 += arr[i] ;
    }
    printf("The duplicate element is %d\n",sum1-sum2);
    return 0 ;
}
//Here both the time complexity and space complexity is efficient.