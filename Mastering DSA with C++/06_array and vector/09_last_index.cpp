// find the last occurrence of x in the given array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    cout<<"Enter the array : ";
    for(int i = 0 ; i < 10 ; i++){
        int a ;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"Enter the value whose last occurrence is to be found : ";
    cin>>x;
    int idx = -1 ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v.at(i)==x) idx = i ;
    }
    if(idx!=-1) cout<<"The last occurrence of "<<x<<" is "<<idx<<endl;
    return 0 ;
}