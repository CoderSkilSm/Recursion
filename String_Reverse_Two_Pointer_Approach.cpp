#include<bits/stdc++.h> 

using namespace std;

int main(void){
    string s1 = "abcdeg"; 
    
    int i = 0; 
    int j = s1.length()-1; 
    //Two pointer approach
    while(i < j){
        swap(s1[i],s1[j]); 
        i++; 
        j--;
    }
    
    cout<<"the reverse string is: " << s1 <<endl; 
}
