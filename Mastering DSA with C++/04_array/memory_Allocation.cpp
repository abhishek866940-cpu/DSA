#include<iostream>
using namespace std ;
int main(){
    int arr[5];
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    return 0 ;
}
//address of array is same as address of 1st element of the array.