// find the next permutation of the array
//leetcode - 31 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void display(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void next_permutation(vector<int> &v){
    //1)finding pivot idx
    int idx = -1 ; 
    int n = v.size();
    for(int i = n-2 ; i >= 0 ; i--){
        if(v[i]<v[i+1]){
            idx = i ;
            break ;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        return ;
    }
    // 2) reverse idx+1 to the end
    reverse(v.begin()+idx+1,v.end());
    //3) find index of just greater than the value which is present at idx.
    int j = -1 ;
    for(int i = idx+1 ; i < n ; i++){
        if(v[idx]<v[i]){
            j = i ; 
            break ;
        }
    }
    //4)swap idx ka element and j ka element
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp ;
    return ;

}
int main(){
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < v.size() ; i++){
        cin>>v[i];
    }
    next_permutation(v);
    display(v);
    return 0 ;
}