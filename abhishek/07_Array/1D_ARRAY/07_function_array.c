#include<stdio.h>
void fun(int x[]){
    x[0] = 10 ;   //OMG
    return ;
}
int main(){
    int arr[5] = {1,5,6,3,7};
    printf("Before calling function %d\n",arr[0]);
    fun(arr);
    printf("After calling function %d\n",arr[0]);
    return 0 ;
}