// Find K closest Elements (leetcode - 658)

#include<iostream>
using namespace std ;
int main(){

    vector<int> arr = {1,2,3,4,6,8,9} ;
    int x = 2 ; //Target element
    int k = 4 ; // 4 closest elements
    int n = arr.size();


    vector<int> ans(k);

    // if target element is less than the arr[0] element
    
    if(x < arr[0]){
        for(int i = 0 ; i < k ; i++){
            ans[i] = arr[i] ;
        }
        return 0 ;
    }

    // if target element is greater than the arr[n-1] element

    if(x > arr[n-1]){
        int i = n - 1 ;
        int j = k - 1 ;
        while(j>=0){
            ans[j] = arr[i];
            i-- ;
            j-- ;
        }
        return 0 ;
    }

    int lo = 0 ;
    int hi = n - 1 ;
    int mid ;
    int flag = false ;
    int t = 0 ;
    int lb = -1 ;   //lower bound
    int ub = -1 ;   //upper bound

    // finding target and lower bound, upper bound

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(arr[mid] == x){
            ans[t] = x ;
            flag = true ;
            t++ ;
            lb = mid - 1;
            ub = mid + 1 ;
            break ;
        }
        else if(x > arr[mid]) lo = mid + 1; 
        else hi = mid - 1 ;
    }

    if(flag==false){    //if element target element is not present 
        lb = hi ;
        ub = lo ;
    }       

    // filling the k closest elements 

    while(t < k && lb >= 0 && ub <= n-1){
        if(abs(arr[lb] - x) < abs(arr[ub]-x) || ( abs(arr[lb - x]) == abs(arr[ub] - x) && lb < ub )){
            ans[t] = arr[lb] ;
            lb -- ;
        }
        else{
            ans[t] = arr[ub] ;
            ub ++ ;
        }
        t++ ;
    }

    if(lb < 0){
        while(t < k){
            ans[t] = arr[ub] ;
            ub++ ;
            t++ ;
        }
    }

    if(ub > n - 1){
        while(t < k){
            ans[t] = arr[lb];
            lb-- ;
            t++ ;
        }
    }

    // now sort it
    sort(ans.begin(),ans.end());

    // printing the k closest elements in sorted manner
    for(int i = 0 ; i < k ; i++){
        cout<<ans[i]<<" ";
    }

    return 0 ;
}