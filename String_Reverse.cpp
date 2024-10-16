#include<bits/stdc++.h> 

using namespace std; 

void reverse_string(string &s1,int i,int j){
    if(i > j){
        return; 
    }
    
    swap(s1[i],s1[j]);
    i++;
    j--;
    return reverse_string(s1,i,j);
}


int main(void){
    string s1 = "hello world"; 
    int i = 0; 
    int j = s1.length()-1; 
    
    reverse_string(s1,i,j); 
    cout<<"The reverse is:" << s1<<endl; 
}
