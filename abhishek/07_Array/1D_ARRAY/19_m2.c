#include<stdio.h>
#include<stdbool.h>
int main(){
    int x ;
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[] = {1,4,5,7,21,12};
    bool flag = false ;
    int idx ;                                       
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i]==x){
            flag = true ;
            idx = i ;
            break ;
        }
    }
    if(flag==false){
        printf("%d is not present in the array ",x);
    }
    else{
        printf("%d is present in the array at index %d",x,idx);
    }
    return 0 ;
}