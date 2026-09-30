#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {1,2,3,4,4,5,5,5};
    int max = INT_MIN ;
    int smax = INT_MIN ;
    for(int i = 0 ; i < 8 ; i++){
        if(max<arr[i]){
            smax = max ;
            max = arr[i];
        }
        else if(smax<arr[i] && max != arr[i]){
            smax = arr[i];
        }
    }
    printf("The maximum in the array is %d\n",max);
    printf("The second maximun in the array is %d\n",smax);
    return 0 ;
}