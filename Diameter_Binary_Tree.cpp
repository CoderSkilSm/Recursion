class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
     int height(Node* root){
           if(root == NULL){
               return -1;
           }
           int left = height(root -> left); 
           int right = height(root -> right); 
           int ans = max(left,right) + 1; 
           return ans; 
    }
    pair<int,int> diameterFast(Node* root){
        if(root == NULL){
            pair<int,int> p = make_pair(-1,0); 
            return p; 
        }
        
        pair<int,int> left = diameterFast(root -> left); 
        pair<int,int> right = diameterFast(root -> right); 
        
        int op1 = left.first; 
        int op2 = right.first; 
        int op3 = left.second + right.second ; 
        
        pair<int,int> ans; 
        ans.first = max(op1,max(op2,op3)); 
        ans.second = max(left.second,right.second) + 1; 
        
        return ans; 
    }
    int diameter(Node* root) {
        // Your code here
        return diameterFast(root).first; 
    }
};
