#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Abhishek";  //Not including \0. 
    int x = strlen(s1);
    printf("%d\n",x);
    return 0 ;
}