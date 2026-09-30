//Write a program to illustrate the use of arrow operator → in C.
#include <stdio.h>
 struct office{
    int income ;
    char name[20];
    };
int main(){
    struct office emp1 = {1000000,"jonny"};
    struct office *ptr = &emp1;
    printf("%s have income of %d/anually \n",ptr->name,ptr->income);
    return 0;
}
