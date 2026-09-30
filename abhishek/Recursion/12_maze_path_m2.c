#include<stdio.h>
int maze(int n , int m){
    int RightWays = 0 ;
    int DownWays = 0 ;
    if(n==1 && m==1){
        return 1 ;
    }
    if(n==1){
        RightWays += maze(n,m-1);
    }
    if(m==1){
        DownWays += maze(n-1,m);
    }
    if(m>1 && n>1){
        DownWays += maze(n-1,m);
        RightWays += maze(n,m-1);
    }
int TotalWays = RightWays + DownWays ;
return TotalWays ;
}
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    maze(n,m);
    printf("Total Number of Ways is %d\n",maze(n,m));
    return 0 ;
}