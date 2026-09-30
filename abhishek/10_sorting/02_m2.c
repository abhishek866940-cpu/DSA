//Visited array method
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,5,6,7,8,9};
    int brr[] = {0,0,0,0,0,0,0,0,0,0};      //visited array
    for(int i = 0 ; i < 10 ; i++){
        brr[arr[i]] == 1 ;
    }
    return 0 ;
}
//time complexity is efficient but space complexity isn't.