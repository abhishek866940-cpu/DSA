#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {5,3,1,4,2};
    int n = arr.size();

    cout<<"The unsorted array is : ";
    // using of for each loop 
    for(int ele : arr){
        cout<<ele<<" ";
    }

    cout<<endl ;

    int minidx ;
    for(int i = 0 ; i < n-1 ; i++){
        minidx = i;
        for(int j = i ; j <= n-1 ; j++){
            if(arr[minidx] > arr[j]){
                minidx = j;
            }
        }
        swap(arr[minidx],arr[i]);
    }
    

    cout<<"The sorted array is : " ;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    } 
    return 0 ;
}