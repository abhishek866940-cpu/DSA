//Sort the array of 0's , 1's , 2,s.
//leetcode - 75
#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int> &a){
        for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl ;
}
int main(){
    vector<int> v = {0,0,1,2,0,1,1,0,0,2,2,1,1};
    display(v);
    int noz = 0 ;
    int noo = 0 ;
    int notwo = 0 ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notwo++ ;
    }
    for(int i = 0 ; i < v.size() ; i++){
        if(i<noz) v[i] = 0 ;
        else if(i<(noz+noo)) v[i] = 1 ;
        else v[i] = 2 ;
    }
    display(v);
    return 0 ;
}
