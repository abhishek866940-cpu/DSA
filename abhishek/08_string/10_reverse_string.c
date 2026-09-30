#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter a string");
    scanf("%[^\n]s",str);   // we use this because gets is unsafe.
    puts("The size of the string is : ");
    int size = 0 ;
    int k = 0 ;
    while(str[k]!='\0'){
        size++ ;
        k++;
    }
    printf("%d\n",size);
    int i = 0 ;
    while(i<size){
        char temp = str[size-1];
        str[size-1] = str[i];
        str[i] = temp ;
        i++;
        size--;
    }
    printf("The reverse is : ");
    puts(str);
    return 0 ;
}