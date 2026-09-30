//Write a fⁿ to insert a new character in a string at a given position.
//Let the position 2.
#include<stdio.h>
int main(){
    char s1[100] = "College";
    int k = 0 ;
    int size = 0;
    while(s1[k]!='\0'){
        size++;
        k++;
    }
    for(int i = size ; i >=2 ; i--){
        s1[i+1] = s1[i] ;
    }
    s1[2] = 'l';
    puts(s1);
    return 0 ;
}
