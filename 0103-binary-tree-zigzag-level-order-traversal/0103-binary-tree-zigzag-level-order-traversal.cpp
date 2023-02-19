class Solution {
public:
    int level=0;
    queue<TreeNode*>tobetraversed;
    void Traverse(vector<vector<int>>&ans)
    {
        int thisiteration=tobetraversed.size();
        vector<int>values;
        while(thisiteration--)
        {
            if(tobetraversed.front()==NULL)
            {
                tobetraversed.pop();
                continue;
            }
            if(tobetraversed.front()->left!=NULL)
            {
                tobetraversed.push(tobetraversed.front()->left);
            }
            if(tobetraversed.front()->right!=NULL)
            {
                tobetraversed.push(tobetraversed.front()->right);
            }
            values.push_back(tobetraversed.front()->val);
            tobetraversed.pop();
        }
        if(level%2==1)
        {
            reverse(values.begin(),values.end());
        }
        level++;
        ans.push_back(values);
        if(tobetraversed.size()!=0)
        {
            Traverse(ans);
        }
        return;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        tobetraversed.push(root);
        Traverse(ans);
        return ans;
    }
};