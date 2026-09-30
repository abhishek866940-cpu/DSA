#include<stdio.h>
int main(){
    char str[] = "College Wallah";
    char *ptr = str ;
    int i = 0 ;
    while(str[i]!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0 ;
}