#include<iostream>
using namespace std ;
int main(){
    int m;
    cout<<"Enter the rows/columns : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter the array : "<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }

    // transpose
    for(int i = 0 ; i < m ; i++){
        for(int j = i ; j < m ; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i] ;
                arr[j][i] = temp ;
        }
    }

    // swapping
    for(int i = 0 ; i < m ; i++){
        int j = 0 ;
        int k = m-1 ;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp ;
            j++;
            k--;
        }
    }
    cout<<"Printing the 90 degree rotate clockwise array : "<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0 ;
}