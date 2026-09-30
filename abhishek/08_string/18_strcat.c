#include<stdio.h>
#include<string.h>
int main(){
    char s1[50] = "Abhishek ";
    char s2[] = "Prajapati";
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0 ;
}