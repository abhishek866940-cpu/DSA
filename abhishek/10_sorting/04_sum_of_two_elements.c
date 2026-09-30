#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,8,9,10};
    int target = 8 ;
    for (int i = 0; i < 6 ; i++){
        for(int j = i+1 ; j < 7 ; j++){
            if(arr[i]+arr[j]==target){
                printf("The two no. whose sum is equal to %d are %d and %d\n",target,arr[i],arr[j]);
            }
        }
    }
    
    return 0 ;
}
//Here time complexity isn't efficient.