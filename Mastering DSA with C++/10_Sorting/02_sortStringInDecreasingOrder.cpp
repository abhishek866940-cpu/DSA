// Sort a String in decreasing order of values associated after removal of values smaller than x.

#include<iostream>
using namespace std ;
int main(){
    string s = "AZYZXBDJKX";
    string str ="";

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'X') str += s[i] ; 
    }
    
    // now sort the str
    int n = str.size();
    for(int i = 0 ; i < n-1 ; i++){
        bool flag = true ;
        for(int j = 0 ; j < n-1-i ; j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag = false ;
            }
        }
        if(flag) break ;
    }

    cout<<str;
    return 0 ;
}