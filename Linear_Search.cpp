#include<bits/stdc++.h> 

using namespace std; 

int Linear_Search(int arr[],int size,int key){
    if(size == 0){
        return 0; 
    }
    
    if(arr[0] == key){
        return 1; 
    }
    
    return Linear_Search(arr+1,size-1,key); 
}

int main(void){
    int arr[] = {1,2,4,5,20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    int key; 
    cout<<"Enter the key: "<<" "; 
    cin>>key;
    int ans = Linear_Search(arr,size,key); 
    if(ans == 1){
        cout<<"Found"<<endl; 
    }
    else{
        cout<<"Not Found"<<endl; 
    }
    return 0; 
    
}
