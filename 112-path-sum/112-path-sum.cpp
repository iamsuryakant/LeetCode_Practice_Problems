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
    int sum = 0;
    bool p = false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root != nullptr){
            sum += root->val;
        
            if(root->left == nullptr && root->right == nullptr)
            {
                if(sum == targetSum)
                    p = true;
            }else{
                
                hasPathSum(root->left, targetSum);
                hasPathSum(root->right, targetSum);
            }
            sum -= root->val;
        }
        
        
        return (p == true)?true:false;
        
       
    }
};