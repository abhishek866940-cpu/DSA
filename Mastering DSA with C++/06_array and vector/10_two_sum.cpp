#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n ;
    cout<<"Enter array size : ";
    cin>>n ;
    cout<<"Enter the array : ";
    for(int i = 0 ; i < n ; i++){
        int y ;
        cin>>y ;
        v.push_back(y);
    }
    int x ; 
    cout<<"Enter the doublet sum : ";
    cin>>x;
    if(v.size() < 2){
        cout<<"Array has less than 2 elements. No pairs possible."<<endl;
        return 0;
    }
    cout<<"Pair of doublets(indices) are  "<<endl;
    for(int i = 0 ; i < v.size()-1 ; i++){
        for(int j = i+1 ; j < v.size() ; j++){
            if(v.at(i)+v.at(j)==x){
            cout<<"("<<i<<","<<j<<")";
            cout<<endl;
            }
        }
    }
    
    return 0 ;
}