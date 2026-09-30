#include<iostream>
using namespace std ;
int main(){
    int m ;
    cout<<"Enter the rows/columns : ";
    cin>>m;
    cout<<"Enter the matrix : "<<endl;
    int mat[m][m];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>mat[i][j];
        }    
    }
    for(int i = 0 ; i < m ; i++){
        if(i%2==0){
            for(int j = 0 ; j < m ; j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j = m-1 ; j >=0 ; j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return 0 ;
}