class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int > k;
        int flag = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                cout<<nums[j];
                if (nums[i] + nums[j] == target)
                {
                    k = {i, j};
                    flag = 1;  
                     break;
                }
            }
            if (flag == 1)
                break;
        }
        return k;
    }
};