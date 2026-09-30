// Merge two sorted array.
//leetcode - 88
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl ;
}
vector<int> merge(vector<int> &v1 ,int n ,vector<int> &v2 , int m , vector<int> v3){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
        while(i < n && j < m){ //
        if(v1[i]<v2[j]){
            v3[k] = v1[i];
            i++;
            k++;
        }
        else{
            v3[k] = v2[j] ;
            j++;
            k++;
        }
    }
    if(i==n){
        while(j < m){
            v3[k] = v2[j] ;
            k++;
            j++;
        }
    }
    else{
          while(i < n){
            v3[k] = v1[i] ;
            k++;
            i++;
        }
    }
    return v3 ;
}
int main(){
    vector<int> v1 = {1,4,7,9};
    vector<int> v2 = {2,5,6,8,10,12};
    vector<int> v3(v1.size()+v2.size());
    int n = v1.size();
    int m = v2.size();
    display(v1);
    display(v2);
    vector<int> v = merge(v1,n,v2,m,v3); //function
    display(v);
    return 0 ;
}