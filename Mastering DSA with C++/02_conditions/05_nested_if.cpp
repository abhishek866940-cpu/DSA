#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    if(marks>=91){
        cout<<"Excellent";
    }
     else{
            if(marks>=81){
                cout<<"Very good ";
            }
            else{
                if(marks>=71){
                    cout<<"Good";
                }
                else{
                    if(marks>=61){
                        cout<<"Average";
                    }
                    else{
                        if(marks>=51){
                            cout<<"Below average";
                        }
                        else{
                            if(marks<=50){
                                cout<<"fail";
                            }
                        }
                    }
                }
            }
        }
        return 0 ;
    }
    