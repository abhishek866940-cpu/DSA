#include<stdio.h>
#include<string.h>
int main(){
    char ch[100] ;
    gets(ch);  // entire sentence will be input ;
    // or used scanf("%[^\n]s",ch);
    puts(ch);   // automatically ek \n deta h.
    return 0 ;
}
