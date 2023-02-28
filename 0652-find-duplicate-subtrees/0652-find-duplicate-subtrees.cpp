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
    vector<TreeNode*>ans;
    map<string,int>m;
    string solve(TreeNode*root)
    {
        if(!root) return "$";
                string s=solve(root->left)+ ',' +solve(root->right)+ ',' +to_string(root->val);

        m[s]++;
        if(m[s]==2)
            ans.push_back(root);
         
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        solve(root);
        
        return ans;
    }
};