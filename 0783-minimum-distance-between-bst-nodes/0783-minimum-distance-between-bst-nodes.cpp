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
    vector<int>ans;
    void solve(TreeNode*root)
    {
        if(!root) return ;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return 0;
        solve(root);
        int mini=INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            mini=min(mini,ans[i]-ans[i-1]);
        }
        return mini;
    }
};