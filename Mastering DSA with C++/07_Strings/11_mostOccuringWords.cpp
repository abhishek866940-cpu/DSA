// Given a sentence 'str',return he word that is occuring most number of times in that sentence.

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std ;
int main(){
    string s = "Raghav is a maths teacher.He is a DSA mentor as well!";
    stringstream ss(s);
    string temp ;
    vector<string> v; // string arr[]
    
    while(ss>>temp){
        v.push_back(temp);
    }

    // sort the array
    sort(v.begin(),v.end());

    // counting most occuring word

    int count = 1 ;
    int max_count = 1 ;

    for(int i = 1 ; i < v.size() ; i++){
        if(v[i]==v[i-1]) count++ ;
        else count = 1 ;

        max_count = max(count,max_count);
    }

    // printing the most occuring word
    count = 1 ;
    for(int i = 1 ; i < v.size() ; i++){
        if(v[i]==v[i-1]) count++ ;
        else count = 1;

        if(count==max_count) cout<<v[i]<<" "<<max_count<<endl;
    }
    return 0 ;
}