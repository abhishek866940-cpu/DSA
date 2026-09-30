#include<stdio.h>
int main(){
    int marks[] = {89,78,99};
    int* ptr = &marks[0];
    // int* ptr = marks; is same as int* ptr = &marks[0];
    for(int i = 0 ; i < 3 ; i++){
        printf("The value at index %d is %d\n",i,*ptr+i);
    }
    return 0 ;
}