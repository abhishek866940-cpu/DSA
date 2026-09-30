#include<iostream>
using namespace std ;
int main(){
    int n ;
    int m ;
    cout<<"Enter the no. of rows and no. of columns : ";
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The transpose of the matrix is "<<endl;
    
    int transpose[m][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m  ; j++){
            transpose[j][i] = arr[i][j]; 
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}