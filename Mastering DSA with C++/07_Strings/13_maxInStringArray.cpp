// find the maximum number 

#include<iostream>
#include<string>
using namespace std ;
int main(){
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    string maxS ;
    for(int i = 1 ; i < 6 ; i++){
        int x = stoi(arr[i]);
        if(max<x){
            max = x ;
            maxS = arr[i];
        }    
    }

    cout<<"Maximum is "<<max<<endl;
    cout<<"string have max number is : "<<maxS<<endl;
    return 0 ;
}