#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num ; 
    int reverse = 0 ;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0){
        int lastdigit = num%10 ;
        
        // Check for overflow before multiplication
        if(reverse > INT_MAX/10 || (reverse == INT_MAX/10 && lastdigit > 7)){
            cout<<"Overflow! Cannot reverse this number."<<endl;
            return 0;
        }
        if(reverse < INT_MIN/10 || (reverse == INT_MIN/10 && lastdigit < -8)){
            cout<<"Overflow! Cannot reverse this number."<<endl;
            return 0;
        }
        
        reverse = reverse*10 + lastdigit;
        num = num / 10 ;
    }
    cout<<"The reverse of the given number is "<<reverse<<endl;
    return 0 ;
}