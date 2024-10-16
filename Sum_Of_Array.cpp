#include<bits/stdc++.h> 

using namespace std; 

int arr_Sum(int arr[],int size){
    //Base Case 
    if(size == 0){
        return 0; 
    }
    if(size == 1){
        return arr[0];
    }
    
    //Recurrence Relation
    return arr[0] + arr_Sum(arr+1,size-1);  
}


int main(void){
    int arr[] = {1,2,4,4,4}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    
    cout<<"The sum is : " << arr_Sum(arr,size)<<endl; 
    return 0; 
    
}
