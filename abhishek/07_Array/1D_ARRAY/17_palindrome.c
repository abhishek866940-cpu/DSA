//check the given array is a palindrome or not.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int palindrome = 1 ;  // we let given array is a palindrome.
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != arr[n-1-i]){
            palindrome = 0 ;
            break ;
        }
    }
    if(palindrome)
    printf("The given array is a palindrome ");
    else
    printf("The given array isn't a palindrome");

    
    return 0 ;
}