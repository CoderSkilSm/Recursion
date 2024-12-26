#include<bits/stdc++.h> 

using namespace std; 


void level_order(node* root){
  queue<node*> q; 
  q.push(root); 
  while(!q.empty()){
    node* temp = q.front(); 
    cout << temp -> data << " " ;
    q.pop(); 
    if(temp -> left){
          q.push(temp -> left); 
    }
    if(temp -> right){
          q.push(temp -> right); 
    }
  }


void pre_order(node* root){
   if(root == NULL ){
   return; 
   }
   cout << root -> data << " "; 
   pre_order(root -> left); 
   pre_order(root -> right); 
}


void in_order(node* root){
     if(root == NULL){
     return;
     }
     in_order(root -> left); 
     cout << root -> data << " " ; 
     in_order(root -> right); 
}


void post_order(node* root){
     if(root == NULL){
      return; 
     } 
     post_order(root -> left); 
     post_order(root -> right); 
     cout << root -> data << " " ; 
}





