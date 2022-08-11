/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool BSTU(TreeNode* root, TreeNode* &prev)
    {
        if(root)
        {
            if(!BSTU(root->left, prev))
                return false;
            
            if(prev != nullptr && root->val <= prev->val)
                return false;
            
            prev = root;
            
            return BSTU(root->right, prev);
                
        }
        
        return true;
    }
    
    
    
    
    bool isValidBST(TreeNode* root) {
        
        // if(root == nullptr){
        //     return true;
        // }
        
       TreeNode* prev = nullptr;
        
        return BSTU(root, prev);
        
        //return false;
    }
};