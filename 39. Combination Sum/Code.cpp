class Solution {
public:
    void helper(vector<vector<int>>& res, vector<int>& v, vector<int>& candidates, int target, int pos) {
        // Base case
        if(target == 0) {
            res.push_back(v);
            return;
        }
        else if (target < 0) return;

        //Body of recursion
        for(int i = pos; i <candidates.size(); i++) {
            if (candidates[i] <= target) {
                v.push_back(candidates[i]);
                helper(res, v, candidates, target - candidates[i], i);
                v.pop_back();
            }
            else break;
        }

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;

        sort(candidates.begin(), candidates.end());
        helper(res, v, candidates, target, 0);
        return res;
    }
};
Console
