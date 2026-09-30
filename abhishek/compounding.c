#include<stdio.h>
int main(){
    float n;
    printf("Enter the initial amount ");
    scanf("%f",&n);
    int no_of_days;
    printf("Number of days ");
    scanf("%d",&no_of_days);
    int m = no_of_days ;
    int percent ;
    printf("Enter the compound interst ");
    scanf("%d",&percent);
    for(int i = 1 ; i <= m ; i++){
           n = n + n*percent/100 ;
           printf("DAY %d is %f \n",i,n);
    }

    return 0 ;
}