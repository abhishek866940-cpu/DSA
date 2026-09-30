#include <iostream>
using namespace std;
int main() {
	int sp,cp;
    cout<<"SP:" ;
    cin>>sp;
    cout<<"CP:";
    cin>>cp;
    if((sp-cp)>0) cout<<"Profit";
    if((sp-cp)<0) cout<<"Loss" ;
    if(sp==cp) cout<<"No profit , No loss";
	return 0;
}
