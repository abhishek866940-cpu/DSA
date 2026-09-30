#include<iostream>
using namespace std;
void merge(vector<int> &a , vector<int> &b , vector<int> & res){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while( i < a.size() && j < b.size()){
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++] ;
    }

    while(i < a.size()){
        res[k++] = a[i++];
    }

    while( j < b.size()){
        res[k++] = b[j++] ;
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();
    if(n==1) return ; //Base condition 

    int n1 = n/2 ;
    int n2 = n - n/2 ;

    vector<int> a(n1) , b(n2);

    // copy paste
    //left half
    for(int i = 0 ; i < n1 ; i++){
        a[i] = v[i];
    }

    // right half
    for(int i = 0 ; i < n2 ; i++){
        b[i] = v[i+n1] ;
    }

    // magic aka recursion
    mergeSort(a);
    mergeSort(b);

    // merging

    merge(a,b,v);
    a.clear();
    b.clear();

}


int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n) ; // copying an array into vector

    cout<<"Before sorting : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;

    mergeSort(v);

    cout<<"After sorting : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    return 0 ;
}

// TC :- O(nlogn)
// SC :- O(n)

// Applications

// 1) It is used in sorting linkedlist
// 2) It is used in count inversion problem