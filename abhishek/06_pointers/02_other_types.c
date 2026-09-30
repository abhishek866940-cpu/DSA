#include<stdio.h>
int main(){
    char i = 'a';
    char* j = &i ;
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&i);
    printf("The value of i is %c\n",*j);
    printf("The value of i is %c\n",*(&i));
    float k = 5.38748;
    float* l ;
    l = &k ; 
    printf("The address of k is %p\n",l);
    printf("The address of ik is %p\n",&k);
    printf("The value of k is %f\n",*l);
    printf("The value of k is %f\n",*(&k));
    return 0;
}