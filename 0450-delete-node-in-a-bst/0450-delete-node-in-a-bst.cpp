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
    
    TreeNode*solve(TreeNode*root)
    {
        if(!root->left) return root->right;
        if(!root->right) return root->left;
        TreeNode*rightchi=root->right;
        TreeNode*x=helper(root->left);
        x->right=rightchi;
        return root->left;
    }
    
    TreeNode*helper(TreeNode*root)
    {
        if(root->right==NULL) return root;
        return helper(root->right);
    }
    
    TreeNode* deleteNode(TreeNode* root, int tar) {
        if(!root) return NULL;
        if(root->val==tar){
            return solve(root);
        }
        TreeNode*temp=root;
        while(root!=NULL)
        {
            if(root->val>tar){
                if(root->left!=NULL and root->left->val==tar)
                {
                    root->left=solve(root->left);
                    break;
                }
                else
                    root=root->left;
            }
            else
            {
                if(root->right!=NULL and root->right->val==tar)
                {
                    root->right=solve(root->right);
                    break;
                }
                else
                    root=root->right;
            }     
        }
        return temp;
    }
};