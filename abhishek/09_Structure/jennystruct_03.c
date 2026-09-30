#include<stdio.h>
#include<stdio.h>
struct student{
int rollno;
float marks;
char name[20];
}S;
int main(){
    struct student S1 = {2 , 99 , "Abhishek"};
    struct student S2 = {3 , 95 , "Rahul"};
    if(S1.marks>S2.marks){
        printf("high\n");
    }
    return 0 ;
}