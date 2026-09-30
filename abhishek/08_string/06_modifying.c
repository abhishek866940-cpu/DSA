#include<stdio.h>
int main(){
    char str[] = "Physics Wallah" ;
    str[1] = 98 ;
    str[0] = 'M' ;
    int i = 0 ;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0 ;
}