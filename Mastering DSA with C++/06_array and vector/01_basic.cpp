#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(9);     //do not use [] for input and insertion in vector.
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v[2] = 100 ;  // we can use [] for updation or change.
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    return 0 ;
    
}