//Count the no. of elements in the given array greater than a given number x.
#include<stdio.h>
int main(){
    int n,x ;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[n];
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>x){
            count++;
        }
    }
    printf("The no. of elements which is greater the %d is %d\n",x,count);

    return 0 ;
}