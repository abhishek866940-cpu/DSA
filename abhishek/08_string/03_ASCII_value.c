/*  ASCII Value
'A' ---> 65
'a' ---> 97
'0' ---> 48
'9' ---> 57 
*/
#include<stdio.h>
int main(){
    char ch = 'A' ;
    int x = (int)ch ;    //type casting
    printf("%d\n",x);
    char cha = '0';
    int y = (int)cha ;
    printf("%d\n",y);
    return 0 ;
}