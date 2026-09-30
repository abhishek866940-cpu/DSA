#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(8);
    v.push_back(1);
    v.push_back(4);
    int x; 
    int idx = -1 ;
    cout<<"Enter the element whose last occurrence is to be found : ";
    cin>>x;
    for(int i = v.size()-1 ; i >= 0 ; i--){
        if(v.at(i)==x){
             idx = i ;
             break; }
        
    }
    cout<<"The last occurrence of "<<x<<" is "<<idx<<endl;
    return 0 ;
}