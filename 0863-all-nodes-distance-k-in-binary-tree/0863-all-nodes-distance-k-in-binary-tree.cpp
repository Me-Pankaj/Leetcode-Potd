class Solution {
    void markingParent(TreeNode* root ,unordered_map<TreeNode*,TreeNode*>&parent_tracking,TreeNode* target){
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()){
            TreeNode*  current = queue.front();
            queue.pop();
            if(current->left){
                parent_tracking[current->left]= current;
                queue.push(current->left);
            }
            if(current->right){
                parent_tracking[current->right] = current;
                queue.push(current->right);
            }
        }
        
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent_tracking; // Node's parent
        markingParent(root, parent_tracking, target);
        unordered_map<TreeNode*, bool>visited;

        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int curr_level =0;
        while(!q.empty()){
            int size = q.size();
            if(curr_level++ == k){
                break;
            }
            for(int i = 0 ; i< size ; i++){
                TreeNode* node = q.front();q.pop();
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] =  true;
                 }
                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if(parent_tracking[node] && !visited[parent_tracking[node]]){
                    q.push(parent_tracking[node]);
                    visited[parent_tracking[node]]= true;
                }
            }
        }
            vector<int>result;
            while(!q.empty()){
                TreeNode* current = q.front();
                q.pop();
                result.push_back(current->val);
            }
            return result;
    }
};