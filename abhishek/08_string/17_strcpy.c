#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Physics wallah";
    char s2[50];
    strcpy(s2,s1);
    s2[0] = 'M';
    printf("%s\n",s1);
    printf("%s\n",s2);    //Here s1 and s2 are deep copies.
    return 0 ; 
}