// Given a string consisting lowercase english alphabets.Print the character that is occuring most number of times.

#include<iostream>
#include<string>
using namespace std ;
int main(){
    vector<int> v(26,0);

    string s ;
    cout<<"Enter a string : ";
    cin>>s;
    int n = s.size();

    for(int i = 0 ; i < n ; i++){
        char ch = s[i];
        int ascii = (int)ch ;
        v[ascii - 97] += 1 ;
    }

    int max = 0 ;
    int idx = -1 ;

    for(int i = 0 ; i < v.size() ; i++){
        if(max<v[i]){
            max = v[i];
        }
    }

    // printing
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]==max){
            cout<<char(97+i)<<" "<<v[i]<<endl;
        }
    }


    return 0 ;
}