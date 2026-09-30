//Rotate an array by 'k' steps.
//k can be greater than n.
#include<stdio.h>
void reverse(int arr[],int si ,int ei){
    for(int i = si , j = ei ; i < j ; i++,j--){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7}; 
    int n = 7;
    int k ;
    printf("Enter the value of k ");
    scanf("%d",&k);
    k=k%n;                //step 1
    reverse(arr,0,n-1);   //step 2
    reverse(arr,0,k-1);   //step 3
    reverse(arr,k,n-1);   //step 4
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}