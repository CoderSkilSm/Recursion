#include<bits/stdc++.h> 

using namespace std; 

int binary_Search(int arr[],int size,int low,int high,int key){
    if(low > high){
        return -1; 
    }
    int mid = low + (high - low) /2; 
    if(arr[mid] == key){
        return 1; 
    }
    
    if(arr[mid] < key){
        return binary_Search(arr,size,mid+1,high,key); 
    }
    
    else{
        return  binary_Search(arr,size,low,mid-1,key); 
    }
    
}

int main(void){
    int arr[] = {2,4,6,10,14,18}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    
    int low = 0; 
    int high = size-1; 
    
    int key; 
    cout<<"Enter the key: "<< " "; 
    cin>>key; 
    
    int ans = binary_Search(arr,size,low,high,key); 
    
    if(ans == 1){
        cout<<"Found"<<endl; 
    }
    else{
        cout<<"Not Found"<<endl; 
    }
    
    return 0; 
    
}
