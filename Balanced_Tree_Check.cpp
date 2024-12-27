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
    bool isBalanced(Node* root) {
        if(root == NULL){
            return 1; 
        }
        int ans = height(root -> left) - height(root -> right); 
        if(isBalanced(root -> left) == 1 && isBalanced(root -> right) == 1 && abs(ans) <= 1){
                    return 1;             
        }
        else {
            return 0; 
        }
        
    }
};
