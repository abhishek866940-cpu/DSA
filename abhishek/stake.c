#include<stdio.h>
int main(){
    double bet ;
    int count = 0 ;
    printf("Enter the bet amount ");
    scanf("%lf",&bet);
    double increase_on_loss ;
    printf("enter increase on loss ");
    scanf("%lf",&increase_on_loss);
    double amount = 0.000 ;
    printf("enter the amount ");
    scanf("%lf",&amount);
    for(int i = 1 ;  ;i++){
        if(bet<amount){
            printf("Bet %d is %f\n",i,bet);
        bet += bet*increase_on_loss/100;
        count++;
        
    }
    if(bet>amount){
        break;
    }
}
printf("no. of bets %d\n",count);
printf("total %lf\n",bet);
    return 0 ;
}         