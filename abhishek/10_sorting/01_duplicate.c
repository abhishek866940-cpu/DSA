#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,5,6,7,8,9};
    for(int i = 0 ; i < 9 ; i++){
        for(int j = i+1 ; j < 10 ; j++){
            if(arr[i]==arr[j]){
                printf("The duplicate element is %d\n",arr[i]);
                break ;
            }
        }
    }
    return 0 ;
}
//Here time complexity isn't efficient.
//but space complexity is efficient.
//TLD ---> time limit exceeded. 