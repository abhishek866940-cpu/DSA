#include<stdio.h>
int main(){
    char s1[] = "Physics Wallah";
    char s2[] = "Physics Wallah";
    s2[0] = 'M';
    puts(s1);
    puts(s2);
    return 0 ;
}