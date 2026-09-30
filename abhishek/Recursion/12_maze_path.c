#include<stdio.h>
int maze(int cr,int cc,int er,int ec ){
    int RightWays = 0 ;
    int DownWays = 0 ;
    if(cr==er && cc==ec){
        return 1 ;
    }
    if(cr==er){
        RightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        DownWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        RightWays += maze(cr,cc+1,er,ec);
        DownWays += maze(cr+1,cc,er,ec);
    }
    int totalWays = RightWays + DownWays ; 
    return totalWays ;
}
int main(){
    int n , m ;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    maze(1,1,n,m);
    printf("Number of Ways to reach the destination is %d\n",maze(1,1,n,m));
    return 0 ;
}