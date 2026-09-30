// Dutch national flag algorithm
#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl ;
} 
void swap(int *x , int *y){
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}
int main(){
    vector<int> v = {0,0,1,2,0,1,1,0,0,2,2,1,1};
    int low = 0 ;
    int mid = 0 ;
    int high = v.size()-1 ;
    display(v);
    while(mid<=high){
        if(v[mid]==2){
            swap(&v[mid],&v[high]);
            high--;
        }
        else if(v[mid]==0){
            swap(&v[low],&v[mid]);
            mid++;
            low++;
        }
        else mid++;
    }
    display(v);
    return 0 ;
}