#include<stdio.h>
typedef struct student{
    int rollno ;
    char name[20];
    float marks;
}student;    //nickname of struct student
int main(){
    student s = {1,"Abhishek",90};
    printf("%d %s %f\n",s.rollno,s.name,s.marks);

    return 0 ;
}