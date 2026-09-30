#include<iostream>
using namespace std;
void display(int a[], int x){
    for(int i = 0 ; i < x ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[], int y ){
    b[0] = 100 ;
}
int main(){
    int arr[] = {2,7,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    change(arr,n);
    display(arr,n);
    return 0 ;
}