// Search in Rotated Sorted array

#include<iostream>
using namespace std ;

int binarySearch(vector<int> &v , int lo , int hi , int target){
    int mid ;

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(v[mid]==target) return mid ;
        else if(target < v[mid]) hi = mid - 1 ;
        else lo = mid + 1 ;
    }

    return -1 ;
}

int main(){

    vector<int> arr = {4,5,6,7,0,1,2}; 
    int n = arr.size();
    int target ;

    cout<<"Enter the Target value : ";
    cin>>target ;

    if(n==0){
        if(arr[0] == target){
            cout<<0;
            return 0;
        }
        else{
            cout<<-1;
            return 0 ;
        }    
    }

    if (n==2){
        if(arr[0] == target) {
            cout<<0;
            return 0 ;
        }
        else if(arr[1] == target){
            cout<<1 ;
            return 0 ;
        }
        else return 0 ;
    }
    
    
    // Finding pivot element (change)
    // here pivot element is the smallest element

    int lo = 0 ;
    int hi = n-1 ;
    int mid ;
    int pivot = - 1 ;

    while(lo<=hi){
        mid = lo + (hi-lo)/2 ;
        if(mid > 0 && mid < n-1){
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] ){
                pivot = mid + 1 ;
                break ;
            }
            else if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1]){
                pivot = mid ;
                break ;
            }
        }

        if(arr[mid] > arr[hi]) lo = mid + 1 ;
        else hi = mid - 1 ;
    }

    // Finding the Target Element 
    
    if(pivot == -1){    //array sorted hai in increasing or decreasing
        cout<<binarySearch(arr,0,n-1,target);
        return 0 ;
    }
    else{
        if(arr[pivot] == target){
            cout<<pivot ;
            return 0 ;
        }
        else if(target < arr[n-1]){
            cout<<binarySearch(arr,pivot+1,n-1,target);
            return 0 ;
        }
        else{
            cout<<binarySearch(arr,0,pivot-1,target);
            return 0 ;
        }
    }


    return 0 ;
}