// This code is using the reversal algorithm to rotate an array/vector to the right by k positions.
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &a,int x ,int y){
    while(x<y){
        int temp = a[x];
        a[x] = a[y] ;
        a[y] = temp ;
        x++;
        y--;
    }
}
void input(vector<int> &a, int n){
    for(int i = 0 ; i < n ; i++){
        int z ;
        cin>>z;
        a.push_back(z);
    }
}
void display(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v ;
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    if(n == 0){
        cout<<"Array is empty. Nothing to rotate."<<endl;
        return 0;
    }
    input(v,n);
    int k ;
    cout<<"Enter the value of k : ";
    cin>>k;
    k = k % n ;
    reverse(v,0,v.size()-1);
    reverse(v,0,k-1);
    reverse(v,k,v.size()-1);
    display(v);
    return 0 ;
}