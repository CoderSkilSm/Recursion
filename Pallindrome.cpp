#include<bits/stdc++.h> 

using namespace std; 

int check_Pallindrome(string s1,int i,int j){
    if(i > j){
        return 1; 
    }
    
    if(s1[i] != s1[j]){
        return 0; 
    }
    
    return check_Pallindrome(s1,i+1,j-1); 
}



int main(void){
    string s1 = "aaa"; 
    int i = 0; 
    int j = s1.length()-1; 
    
    int ans = check_Pallindrome(s1,i,j); 
    if(ans){
        cout<<"Pallindrome"<<endl; 
    }
    else{
        cout<<"Not Pallindrome"<<endl; 
    }
    
    
    return 0; 
}
