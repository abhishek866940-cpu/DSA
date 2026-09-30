/*
You are given a binary matrix grid containing only 0s and 1s. Each row of the matrix represents a binary number, where the leftmost element is the most significant bit.

You may perform the following operations any number of times:

Flip a row: Change every 0 in the selected row to 1 and every 1 to 0.
Flip a column: Change every 0 in the selected column to 1 and every 1 to 0.

Your goal is to perform these operations in such a way that the sum of the decimal values of all rows is maximized.
Finally, return the maximum possible sum.
*/

#include<iostream>
using namespace std ;
int main(){
    int m , n ;
    vector<vector<int>> v = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    m = v.size();
    n = v[0].size();

    // If MSB = 0 then flip the row

    for(int i = 0 ; i < m ; i++){
        if(v[i][0]==0){
            for(int j = 0 ; j < n ; j++){
                if(v[i][j]==0) v[i][j] = 1 ;
                else v[i][j] = 0 ;
            }
        } 
    }

    // no. of 1s should be maximum in a column

    for(int j = 0 ; j < n ; j++){
        int noo = 0 , noz = 0;
        for(int i = 0 ; i < m ; i++){
            if(v[i][j]==0) noz++;
            else noo++ ;
        }
        if(noz>noo){
            for(int i = 0 ; i < m ; i++){
                if(v[i][j]==0) v[i][j] = 1 ;
                else v[i][j] = 0 ;
            }
        }
    }
    int sum = 0 ;
    for(int i = 0 ; i < m ; i++){
        int x = 1 ;
        for(int j = n-1 ; j >= 0 ; j--){
            sum += v[i][j]*x;
            x *= 2 ;
        }
    }
    cout<<sum<<endl;
    return 0 ;
}
