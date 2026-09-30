#include<iostream>
using namespace std ;
int main(){
    int m ;
    int n ;
    cout<<"Enter the rows and columns : ";
    cin>>m>>n;
    cout<<"Enter the matrix : "<<endl;
    int mat[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>mat[i][j];
        }    
    }
    //spiral code 
    int minr = 0 ; 
    int maxr = m-1 ;
    int minc = 0 ;
    int maxc = n-1 ;
    int tne = m*n ;
    int count = 0 ;
    while(minr <= maxr && minc <= maxc){
        for(int i = minc ; i <= maxc && count<tne ; i++){
            cout<<mat[minr][i]<<" " ;
            count++ ;
        }
        minr++ ;
        for(int i = minr ; i <= maxr && count<tne ; i++){
            cout<<mat[i][maxc]<<" " ;
            count++ ;
        }
        maxc-- ;
        for(int i = maxc ; i >= minc && count<tne ; i--){
            cout<<mat[maxr][i]<<" " ;
            count++ ;
        }
        maxr--;
        for(int i = maxr ; i >= minr && count<tne ; i--){
            cout<<mat[i][minc]<<" " ; 
            count++ ; 
        }
        minc++;
    }
    return 0 ;
}