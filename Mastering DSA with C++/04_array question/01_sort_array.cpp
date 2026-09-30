//sort the array of 0's and 1's
// Two pass solution

#include<iostream>
#include<vector>
using namespace std ;
void sort01(vector<int> &a){
    int count = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i]==0) count++;
    }
    for(int i = 0 ; i < a.size() ; i++){
        if(i<count) a[i] = 0 ;
        else a[i] = 1 ;
    }
}
void display(vector<int> &v){
        for(int i = 0 ; i < v.size() ; i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v = {1,1,0,0,1,1,0,1} ;
    display(v);
    sort01(v);
    display(v);
    return 0 ;
}