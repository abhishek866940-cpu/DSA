//very important
//using two pointers 
#include<iostream>
#include<vector>
using namespace std ;
void swap(vector<int> &a,int x ,int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp ;
}

void display(vector<int> &v){
        for(int i = 0 ; i < v.size() ; i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v ;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    int i = 0;
    int j = v.size()-1;
    while(i<j){
     if(v[i]==0) i++ ;
     else if(v[j]==1) j-- ;
     else {
        swap(v,i,j);
     i++;
     j--;
     }
    }    
    display(v);
    return 0 ; 
}