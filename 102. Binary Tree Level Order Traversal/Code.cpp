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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
         while(q.front() != nullptr) {
            int qLen = q.size();
            vector<int> level;
            for(int i = 0; i < qLen; i++) {
                TreeNode* node = q.front();
                if (node != nullptr) {
                    level.push_back(node->val);
                    q.pop();

                    if (node->left != nullptr) q.push(node->left);
                    if (node->right != nullptr) q.push(node->right);
                }
            }
            if (!level.empty()) result.emplace_back(level);
            q.pop();
            q.push(nullptr);
        }
        return result;
    }
};
