#include<stdio.h>
#include<string.h>
int main(){
    char *s1 = "Physics Wallah";  //Read only memory.
    char *s2 = s1 ;
    s1[0] = 'M';
    printf("%s",s2);
    return 0 ;
}
//Here s2 points to the same character array and change in s1 is also
//reflect in s2.(s2 is a shallow copy)