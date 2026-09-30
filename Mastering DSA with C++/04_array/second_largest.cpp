#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(max<arr[i]){
            smax = max ;
            max = arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
    if(smax==INT_MIN) cout<<"No second largest element exists "<<endl;
    else
    cout<<"The second maximum element is : "<<smax<<endl;
    return 0 ;
}