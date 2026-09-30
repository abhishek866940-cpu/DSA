#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v.push_back(2);
    // v.at(2) = 3 ;
    // cout<<v.at(2);
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());  //Ascending order
       for(int i = 0 ; i < v.size() ; i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<endl;
    sort(v.rbegin(),v.rend());
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v.at(i)<<" ";
    } 

    return 0 ;
}