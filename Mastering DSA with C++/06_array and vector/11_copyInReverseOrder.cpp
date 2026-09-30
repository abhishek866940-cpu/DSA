//Write a program to copy the contents of one array into another one in reverse order.
#include<iostream>
#include<vector>
using namespace std;  
void display(vector<int> &a){
    for(int i = 0 ; i < a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v ;
    v.push_back(4);
    v.push_back(3);
    v.push_back(9);
    v.push_back(8);
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);
    cout<<"The original array is "<<endl;
    display(v);
    vector<int> v2(v.size()) ;
    for(int i = 0 ; i < v.size() ; i++){
        int j = v.size()-1-i ;
        v2.at(i) = v.at(j);
    }
    cout<<"The reverse is "<<endl;
    display(v2);
    return 0 ;
}