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
    pair<bool, int> dfs(TreeNode* root) {
        if (!root) return make_pair(true, 0);
        
        pair<bool, int> l = dfs(root->left);
        pair<bool, int> r = dfs(root->right);
        
        bool balance = (l.first && r.first) && abs(l.second - r.second) <=1;
        
        return make_pair(balance, 1 + max(l.second, r.second));
    }
    
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }
};
