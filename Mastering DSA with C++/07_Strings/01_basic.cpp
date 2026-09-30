#include<iostream>
using namespace std ;
int main(){
    // '\0' is a null character,terminate krne ke liye hote hai
    char str[5] = {'a','b','c','d','e'}; // {'a','b','c','d','e','\0'}
    // char ch = '\0';
    // cout<<ch<<endl;     //kuch print nhi hoga 
    // cout<<(int)ch<<endl;       
    cout<<(int)(str[5])<<endl;  
// Memory garbage value → changes everytime
// Could be anything:
// 12
// 99 
// crash 
// or different every time

    char str1[] = "abcde";
    for(int i = 0 ; str1[i]!='\0' ; i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl;
    cout<<str1;


    return 0 ;
}