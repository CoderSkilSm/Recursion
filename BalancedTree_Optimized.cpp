#Time complexity --> O(N)
class Solution {
  public:
    // Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if(root == NULL){
            return -1; 
        }
        int left = height(root -> left); 
        int right = height(root -> right); 
        int ans = max(left,right) + 1; 
        return ans; 
    }
    pair<bool,int> isBalancedFast(Node* root){
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0); 
            return p; 
        }
        pair<bool,int> left = isBalancedFast(root -> left); 
        pair<bool,int> right = isBalancedFast(root -> right); 
        
        bool diff = abs(left.second - right.second) <=1; 
        
        pair<bool,int> ans; 
        ans.second = max(left.second,right.second) + 1; 
        
        if(left.first && right.first && diff){
            ans.first = true; 
        }
        else{
            ans.first = false; 
        }
        
        return ans; 
        
        
        
    }
    bool isBalanced(Node* root) {
        return isBalancedFast(root).first; 
        
    }
};
