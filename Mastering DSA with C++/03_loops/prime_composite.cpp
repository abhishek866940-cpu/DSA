#include<iostream>
using namespace std;
int main(){
    int n ;
    bool flag = true ;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 2 ; i <= n-1 ; i++){
        if(n%i==0){
            cout<<n<<" is a composite number"<<endl;
            flag = false ;
            break;
        }
    }
    if(n==1){
        cout<<"Neither composite nor prime"<<endl;
    }
    else if(flag==true){
        cout<<n<<" is a prime number "<<endl;
    }
    return 0 ;
}