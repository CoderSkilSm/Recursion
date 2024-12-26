#include<bits/stdc++.h> 

using namespace std; 

class node{
    public: 
    int data; 
    node* left; 
    node* right; 
    node(int d){
    this -> data = d; 
    this -> left = NULL;   
    this -> right = NULL; 
    }
}; 


node* buildTree(node* root){
      int data ; 
      cout << "Enter the data: "; 
      cin >> data; 
      if(data == -1){
        return NULL; 
      }
      cout << "Enter the left of " << data << endl; 
      root -> left = buildTree(root -> left); 
      cout << "Enter the right of " << data << endl; 
      root -> right = buildTree(root -> right); 
      return root; 


int main(void){
     node* root = NULL; 
     root = buildTree(root); 
  
  
  
  return 0; 
}
