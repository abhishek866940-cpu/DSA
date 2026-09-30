// ASCII value of \0 ---> 0 
#include<stdio.h>
int main(){
    char arr[]  = "College wallah is best channel for coders\0";
    int i = 0 ;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);  
        i++; 
    }
    return 0 ;
}
//Remember(Ways of printing particular element)
//str[i] = i[str] = *(str+i) = *(i+str) 