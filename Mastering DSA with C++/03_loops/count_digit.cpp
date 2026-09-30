#include<iostream>
using namespace std;
int main(){
    int num;
    int count = 0 ;
    cout<<"Enter the number : ";
    cin>>num;
    int a = num ;
    while(num!=0){
        num = num/10 ;
        count++;
    }
    if(a==0) cout<<1<<endl;
    else cout<<"The number of digits is "<<count<<endl;
    return 0 ;
}