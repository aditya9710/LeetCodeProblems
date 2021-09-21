class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int previousCount = 0, count = 0;
        int previousElement = 0;
        for (int i : nums) {
            // cout<< i <<" ";
            if(i == 1) {
                count++;
            }
            else {
                // cout<<"Previous Count: "<<previousCount<<endl;
                previousCount = max(previousCount, count);
                
                count = 0;
            }
        }
        previousCount = max(previousCount, count);
        return previousCount;
    }
};
