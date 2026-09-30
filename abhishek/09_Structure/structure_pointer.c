#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
struct student s = {1,"Rahul",90.5}; // global variable
int main(){
    struct student *ptr = &s;
    printf("Roll no. is %d\n",ptr->rollno);
    printf("Roll no. is %d\n",(*ptr).rollno);//we can also write this
    printf("Name is %s\n",ptr->name);
    printf("Marks is %f \n",ptr->marks);
    return 0 ;
}