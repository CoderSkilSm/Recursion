#include<bits/stdc++.h> 

using namespace std;


void say_digits(int n){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 
    
    if(n == 0){
        return; 
    }
    
    int digit = n%10; 
    n  = n / 10; 
    
    say_digits(n); 
    
    cout<<arr[digit]<<" "; 
}



int main(void){
    int n; 
    cin>>n; 
    say_digits(n); 
    return 0; 
}
