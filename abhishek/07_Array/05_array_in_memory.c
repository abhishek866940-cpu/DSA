#include<stdio.h>
int main(){
int marks[5];
printf("Enter marks of five student\n");
for(int i = 0 ; i < 5 ; i++){
    printf("The value at index %d is %d \n",i,marks[i]);
}
for(int i = 0 ; i < 5 ; i++){
    printf("The address at index %d is %u \n",i,&marks[i]);
}
return 0 ;
}
//Array is a contiguos block in memory.