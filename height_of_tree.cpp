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
    int data; 
    cout << "Enter the data" << " "; 
    cin >> data; 
    root = new node(data); 
    if(data == -1){
        return NULL; 
    }
    cout << "Enter the left of " << data << endl; 
    root -> left = buildTree(root -> left); 
    cout << "Enter the right of " << data << endl; 
    root -> right = buildTree(root -> right); 
    return root; 
}

int height_Tree(node* root){
    if(root == NULL){
        return -1; 
    }
    int left = height_Tree(root -> left); 
    int right = height_Tree(root -> right); 
    int ans = max(left,right) + 1; 
    
    return ans; 
}


int main(void){
    node* root = NULL; 
    root = buildTree(root); 
    
    cout << "The height of the tree is : " << height_Tree(root); 
    return 0;
}

