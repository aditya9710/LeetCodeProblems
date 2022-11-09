class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto euclidean = [](auto& p) { return p[0] * p[0] + p[1] * p[1]; };
        auto comp = [&](auto& a, auto& b) { return euclidean(a) > euclidean(b); };
        make_heap(begin(points), end(points), comp);
        
        vector<vector<int>> ans(k);
        for(int i = 0; i < k; i++) {
            ans[i] = points[0];
            pop_heap(begin(points), end(points), comp);
            points.pop_back();
        }
        return ans;
    }
};
