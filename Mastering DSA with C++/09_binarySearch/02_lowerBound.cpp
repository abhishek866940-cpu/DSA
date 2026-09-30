// Ques. Given a sorted integer array and a integer x ,find the lower bound of x .

// method 1 : Linear search 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20 ;

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>x){
            cout<<"The lower bound of "<<x<<" is "<<arr[i-1];
            break ;
        }
    }
    return 0 ;
}