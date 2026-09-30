// Given a string consisting lowercase english alphabets.Print the character that is occuring most number of times.

// brute force 

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a string : ";
    cin>>s;

    int n = s.size();
    int count = 0 ;
    int max_count = 0 ;
    int idx = -1 ;

    for(int i = 0 ; i < n ; i++){
        count = 1 ;
        for(int j = i+1 ; j < n ; j++){
            if(s[i]==s[j]) count++ ;
        }

        if(count>max_count){
            max_count = count ;
        }
    }

    // PRINTING THE LETTERS THAT ARE REPEATING 
    
    for(int i = 0 ; i < n ; i++){
        char ch = s[i];
        int count = 1 ;
        for(int j = i+1 ; j < n ; j++ ){
            if(s[i]==s[j]) count++ ;
        }

        if(count==max_count){
            cout<<s[i]<<" "<<count<<endl ;
        }
    }

    return 0 ;
}