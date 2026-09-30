#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void next_permutation(vector<int> &v){
    int n = v.size();
    int idx = -1 ;
    for(int i = n-1 ; i >=0 ; i--){
        if(v[i-1]>v[i]){
            idx==i ;
        }
    }
}

int main(){
    vector<int> v ;
    int n ;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }

    next_permutation(v);
    return 0 ;
}