//Move all negative numbers to the beginning of the array.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v = {5,-1,3,2,4,-9,-7};
    display(v);
    int i = 0 ;
    int j = v.size()-1 ;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else{
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp ;
            i++;
            j--;
        }
    }
    display(v);
    return 0 ;
}