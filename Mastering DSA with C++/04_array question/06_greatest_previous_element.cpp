#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n) ;
    v[0] = - 1 ;
    v[n-1] = -1 ;
    int arr[n];
    int max = 0 ;

    return 0 ;
}