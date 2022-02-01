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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> curr;
        
        pathSum(root, targetSum, curr, result);
        
        return result;
    }
    
private:
    
    void pathSum(TreeNode* root, int targetSum, vector<int>& curr, vector<vector<int>>& result) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) {
            if (root->val == targetSum) {
                result.push_back(curr);
                result.back().push_back(root->val);
            }
            return;
        }
        
        curr.push_back(root->val);
        targetSum -= root->val;
        pathSum(root->left, targetSum, curr, result);
        pathSum(root->right, targetSum, curr, result);
        curr.pop_back();
    }
    
};
