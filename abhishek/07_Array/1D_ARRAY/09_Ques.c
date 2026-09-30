/*change the value of all odd indexed elements to its second multiple and increment 
all even indexed value by 10 */ 
#include<stdio.h>
int main(){
    int arr[8] = {1,5,4,6,8,3,7,4};
    for(int i = 0 ; i < 8 ; i++){
    if(i%2==0){
    arr[i] = arr[i]+10;
    }
    else{
    arr[i] = arr[i]*2 ;
    }
    }   
    for(int i = 0 ; i < 8 ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}