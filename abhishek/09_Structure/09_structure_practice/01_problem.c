//Create a two-dimensional vector using structures in C.
#include<stdio.h>
struct vector{
    int i ;
    int j ;
};
int main(){
    struct vector v1 = {1,2};
    printf("The value of the vector %di+%dj \n",v1.i,v1.j);

    return 0; 
}