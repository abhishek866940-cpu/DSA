#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int n ;
    int m ;
    cout<<"Enter the no. of rows and no. of columns : ";
    cin>>n>>m;
    int arr[n][m];
    int max = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"The largest element in the array is "<<max<<endl;
    return 0 ;
}