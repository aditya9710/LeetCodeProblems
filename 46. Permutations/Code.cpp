class Solution {
public:
    vector<vector<int>> result;
    
    void recursivePermutation(vector<int>& nums, vector<int>& permutation, vector<bool>& visited) {
        
        if(permutation.size() == nums.size()) {
            result.push_back(permutation);
            return;
        }
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                permutation.push_back(nums[i]);
                
                recursivePermutation(nums , permutation , visited);
                permutation.pop_back();
                visited[i] = false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> permutation;
        vector<bool> visited (nums.size(), false);
        recursivePermutation(nums, permutation, visited);
        return result;
    }
};
