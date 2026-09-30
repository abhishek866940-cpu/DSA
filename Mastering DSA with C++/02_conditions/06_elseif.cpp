#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks(1-100) : ";
    cin>>marks;
    if(marks>=91){
        cout<<"Excellent";
    }
    else if(marks>=81){
        cout<<"very good";
    }
    else if(marks>=71){
    cout<<"Good";
    }
    else if(marks>=61){
        cout<<"Can do better";
    }    
    else if(marks>=51){
        cout<<"average";
    }
    else if(marks>=41){
        cout<<"Below average";
    }
    else{
        cout<<"fail";
    }
    return 0 ;
}