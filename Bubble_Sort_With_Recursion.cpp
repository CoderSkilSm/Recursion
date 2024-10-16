#include<bits/stdc++.h> 

using namespace std;

void bubble_Sort(int *arr,int n){
    //Base-Case ---> already sorted
    if(n == 0 || n == 1){
        return; 
    }
    
    //1 case solved --> largest element is at its right 
    
    for(int i = 0; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //Recurrence Relation
    bubble_Sort(arr,n-1); 
}



int main(void){
    int arr[5] = {20,14,10,19,1}; 
    
    bubble_Sort(arr,5); 
    
    cout<<"The sorted array is: " << endl; 
    for(int i = 0; i<5; i++){
        cout<<arr[i] << " "; 
    }
    return 0; 
}
