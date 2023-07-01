class Solution {
int findDays(vector<int>& weights, int cap) {
    int days = 1;
    int load = 0;

    for(int i = 0; i < weights.size(); ++i) {
        if(weights[i] + load > cap) {
            days += 1;
            load = weights[i];
        }
        else load += weights[i];
    }
    return days;
}

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high) {
            int cap = low + (high - low)/2;
            int num_days = findDays(weights, cap);

            if (num_days <= days) high = cap - 1;
            else low = cap + 1;
        }
        return low;
    }
};
