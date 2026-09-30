#include<iostream>
using namespace std ;
int main(){
    int a[] = {1,4,5,6,2};
    int *p = a;
     for(int i = 0 ; i < 5 ; i++){
        cout<<*p<<" ";  //we can also write i[arr] or i[p] or p[i]
        p++;
     }
    return 0 ;
}