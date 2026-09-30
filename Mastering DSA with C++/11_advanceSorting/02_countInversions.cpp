// Two elements of an array a,a[i] and a[j] form an inversion if a[i] > a[j] and i < j.Find the inversion count in the array.

// Method 1 = Brute Force → every pair check ,  T.C : O(n^2) , S.C : O(1)
// Method 2 = Merge sort based inversion counting .

#include<iostream>
#include<vector>
using namespace std ;
int total_inversions = 0 ;

int inversions(vector<int> &a , vector<int> &b){
    int i = 0 ;
    int j = 0 ;
    int count = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] > b[j]){
            count += (a.size()-i);
            j++ ;
        }
        else{
            i++;
        }

    }
    return count ;
}

void merge(vector<int> &a , vector<int> &b , vector<int> &res){
    int i = 0 ; 
    int j = 0 ;
    int k = 0 ;

    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }

    while(i < a.size()){
        res[k++] = a[i++];
    }

    while(j < b.size()){
        res[k++] = b[j++];
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();
    if(n <=1 ) return ;

    int n1 = n/2 ;
    int n2 = n - n/2 ;
    vector<int> a(n1) , b(n2);

    for(int i = 0 ; i < n1 ; i++){
        a[i] = v[i];
    }

    for(int i = 0 ; i < n2 ; i++){
        b[i] = v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    // count the inversions
    total_inversions += inversions(a,b);

    merge(a,b,v);
    
}

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); //copying array into vector

    cout<<"The given array is : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
       
    mergeSort(v);
    cout<<endl;
    cout<<"The total number of inversions are : "<<total_inversions;

    return 0 ;
}