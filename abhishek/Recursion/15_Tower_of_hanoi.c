#include<stdio.h>   // If we have to calculate no. of moves then moves = 2ⁿ-1.
void tower(int n , char s , char h , char d){
    if (n==0) return ;
    tower(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);
    
}
int main(){
    int n ;
    printf("Enter number of disks : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0 ;
}