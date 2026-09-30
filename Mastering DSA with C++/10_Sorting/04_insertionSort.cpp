#include<iostream>
using namespace std ;
int main(){
    vector<int> arr = {5,3,1,4,2};
    int n = arr.size();
    cout<<"The unsorted array is : ";
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl ;
    for(int i = 1 ; i <= n-1 ; i++){
        int key = arr[i];
        int j = i - 1 ;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }
    // OR(DONO ME SE KOI BHI USE KR LO)
    // for(int i = 1 ; i <= n-1 ; i++){
    //     int j = i ; 
    //     while(j >= 0 && arr[j-1]>arr[j]){
    //         swap(arr[j-1],arr[j]);
    //         j--;
    //     }
    // }

    cout<<"The sorted array is : ";
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0 ;
}