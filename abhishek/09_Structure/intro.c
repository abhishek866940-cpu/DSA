#include<stdio.h>
struct student{
int rollno;
float marks;
char name[20];
}S;
int main(){
    struct student S1 = {2 , 99 , "Abhishek"};
    struct student S2 = {3 , 95 , "Rahul"};
    printf("%d\n",S.rollno);
    printf("%d %f %s \n",S1.rollno,S1.marks,S1.name);
    scanf("%d",&S.rollno);
    scanf("%f",&S.marks);
    scanf("%s",S.name);
    printf("%d %f %s\n",S.rollno,S.marks,S.name);
    return 0; 
}