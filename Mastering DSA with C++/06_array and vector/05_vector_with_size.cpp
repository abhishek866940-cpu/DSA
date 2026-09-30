#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);// initial size = 5 , each element have value 7 .
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<v[0]<<" ";
    }
    return 0 ;
}