#include<bits/stdc++.h> 

using namespace std; 

void bubble(vector<int> &arr,int n){
    for(int i = 1; i<n; i++){
        bool swapped = false; 
        
        for(int j = 0; j < n-i ;j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]); 
            swapped = true; 
            }
        }
        if(swapped == false){
        //already sorted
        break; 
    }
    }
}


int main(void){
    vector<int>arr = {10,1,14,20,19}; 
    bubble(arr,arr.size()); 
    for(int i = 0; i<arr.size() ;i++){
        cout<<arr[i]<<" "; 
    }
    return 0; 
}
