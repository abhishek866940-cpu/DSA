#include<stdio.h>
void England(){
    printf("You're in England \n");
    return ;
}
void Australia(){
    printf("You're in Australia\n");
    England();
    return ;
}
void india(){
    printf("You're in India \n");
    Australia();
    return ;
}
int main(){
    india();
    return 0 ;
}