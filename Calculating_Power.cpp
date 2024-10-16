#include<bits/stdc++.h> 

using namespace std; 

int power(int a,int b){
    if(b == 1){
        return a; 
    }
    
    return a*power(a,b-1); 
}



int main(void){
    int a = 5; 
    int b = 3; 
    
    int ans = power(a,b); 
    cout<<ans<<endl; 
    return 0; 
}
