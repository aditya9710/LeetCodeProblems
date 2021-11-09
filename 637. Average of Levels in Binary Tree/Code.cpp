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
    vector<double> result;
    double sum = 0;
    int count = 0;
    
    void bfs(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            count = q.size();
            sum = 0;
            for (int i = 0; i < count; i++) {
                TreeNode* node = q.front();
                if (node -> left) {
                    q.push(node -> left);
                }
                if (node -> right) {
                    q.push(node -> right);
                }
                
                sum += node -> val;
                q.pop();
            }
            result.push_back(sum/count);
        }
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        bfs(root);
        
        return result;
    }
};
