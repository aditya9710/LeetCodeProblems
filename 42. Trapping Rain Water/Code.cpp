class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) return 0;
        int result = 0;
        int left = 0, right = height.size() -1;
        int leftMax = height[left], rightMax = height[right];
        
        while(left < right) {
            if (leftMax <= rightMax) {
                left += 1;
                leftMax = max(leftMax, height[left]);
                result += leftMax - height[left];
            }
            else {
                right -= 1;
                rightMax = max(rightMax, height[right]);
                result += rightMax - height[right];
            }
                
        }
        return result;
    }
};
