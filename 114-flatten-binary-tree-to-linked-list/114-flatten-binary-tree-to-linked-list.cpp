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
    //TreeNode* prev = NULL;
    void flatten(TreeNode* root) {
        
//        // if(root == nullptr)
//             return;
        
        TreeNode* curr = root;
       // TreeNode* prev = NULL;
        
        while(curr != nullptr)
        {
            if(curr->left != nullptr)
            {
               TreeNode* prev = curr->left;
                
                while(prev->right)
                {
                    prev = prev->right;
                }
                
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;
            }
            
             curr = curr->right;
        }
        
    }
};