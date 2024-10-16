#include<bits/stdc++.h> 

using namespace std; 

bool is_sorted(int arr[],int size){
    //Base Case
    if(size == 0 || size == 1){
        return 1; 
    }
    
    if(arr[0] > arr[1]){
        return 0; 
    }
    
    return is_sorted(arr+1,size-1); 
    
}


int main(void){
    int arr[] = {1,2,3,4,5}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    
    cout<<is_sorted(arr,size); 
    return 0; 
    
}
