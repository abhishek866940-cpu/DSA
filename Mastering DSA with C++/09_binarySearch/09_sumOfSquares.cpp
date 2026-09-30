// Sum of Squares
// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c

#include<iostream>
using namespace std ;

bool isPerfectSquare(int n ){
    int root = sqrt(n);
    return root*root == n ;
}

int main(){

    int c ;
    cout<<"Enter the number : ";
    cin>>c;

    int x = 0 ;  // x = a*a
    int y = c ;  // y = b*b
    // therefore, x + y = c

    bool flag = false ;

    while(x<=y){
        if(isPerfectSquare(x) && isPerfectSquare(y)){
            cout<<"Value of x : "<<x<<endl;
            cout<<"Value of y : "<<y<<endl;
            flag = true ;
            break ;
        }
        else if(!isPerfectSquare(y)){
            y = (int)sqrt(y) * (int)sqrt(y);
            x = c - y ;
        }
        else {
            x = (int)(sqrt(x)+1)*(int)(sqrt(x)+1);
            y = c - x ;
        }
    }

    if(!flag){
        cout<<"There are no two value(x,y) who sum of squares is equal to c."<<endl;
    }
    return 0 ;
}
