#include<stdio.h>
int main(){
    char str[] = "Physics wallah";
    char *ptr = str ;
    ptr = "College wallah";
    printf("%s\n",ptr);
    return 0 ;
}
/*
1)In normal intilization, we can modify individual character but not the 
entire string.
2)Pointer intilization, we can modify entire string but not the individual 
character. 
*/