#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns of 1st matrix : ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of 2nd matrix : ";
    cin>>r2>>c2;
    int mat1[r1][c1];
    int mat2[r2][c2];
    if(c1!=r2){
        cout<<"Matrices can't be multiplied,";
    }
    else{
        cout<<"Enter the matrix 1 : "<<endl ;
        for(int i = 0 ; i < r1 ; i++ ){
            for(int j = 0 ; j < c1 ; j++){
                cin>>mat1[i][j];
            }
        }
        cout<<"Enter the matrix 2 : "<<endl ;
        for(int i = 0 ; i < r2 ; i++){
            for(int j = 0 ; j < c2 ; j++){
                cin>>mat2[i][j];
            }
        }
        int res[r1][c2];
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c2 ; j++){
                res[i][j] = 0 ;
                for(int k = 0 ; k < c1 ; k++){
                    res[i][j] += mat1[i][k]*mat2[k][j] ;
                }
            }
        }
        cout<<"Matrix multiplication of two matrices are : "<<endl;
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c2 ; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl ;
        }
    }
    return 0 ;
}