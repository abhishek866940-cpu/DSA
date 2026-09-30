// Amazing question 

// given two strings s and t,determine if they are isomorphic.
// checking the mapping from both the directions.
// Hint - special array  
// test cases
// 1) s - foo , t - car 
// 2) s- badc , t - baba

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "badc" ;
    string t = "baba" ;
    vector<int> v(256,1000);

    // from string "s" perspective

    if(s.length()!=t.length()){
        cout<<"The are not of equal lengths.Therefore they aren't isomorphic"<<endl;
        return -1 ;
    }
    
    for(int i = 0 ; i < s.size() ; i++){
        int idx = int(s[i]);
        if(v[idx] == 1000) v[idx] = s[i] - t[i] ;
        else if(s[i]-t[i]!=v[idx]){
            cout<<"Not isomorphic";
            return -1 ;
        }
     }

     for(int i = 0 ; i < v.size() ; i++){
        v[i] = 1000 ;
     }

    //  from string "t" perspective

    for(int i = 0 ; i < s.size() ; i++){
        int idx = int(t[i]);
        if(v[idx]==1000) v[idx] = t[i] - s[i];
        else if(v[idx]!=t[i]-s[i]){
            cout<<"They are not isomorphic to each other "<<endl;
            return -1 ;
        }
    }

    return 0 ;
}