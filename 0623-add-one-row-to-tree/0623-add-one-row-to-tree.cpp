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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode*x=new TreeNode(val);
            x->left=root;
            return x;
        }
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            c++;
            int n=q.size();
            while(n--)
            {
                TreeNode*curr=q.front();
                q.pop();
                if(c!=depth-1)
                {
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
                }
                else
                {
                    TreeNode*x=new TreeNode(val);
                    x->left=curr->left;
                    curr->left=x;
                    
                    TreeNode*y=new TreeNode(val);
                    y->right=curr->right;
                    curr->right=y;
                }
            }
        }
        return root;
    }
};