/*Ques)Given array of marks of students,If the marks of any student is less than 35
print its rollno.(rollno. refers to the index number)
*/
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int marks[n];
    for(int i = 0 ; i<=n-1 ; i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i = 0 ; i<=n-1 ; i++){
        if(marks[i]<35) 
        printf("Rollno. is %d\n",i);    
    }
    return 0 ;
}
