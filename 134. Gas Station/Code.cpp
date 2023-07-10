class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> difference(gas.size());
        int total_gas = 0;
        int total_cost = 0;
        for (int i = 0; i < gas.size(); ++i) {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if (total_cost > total_gas) return -1;
        
        int total = 0;
        int result = 0;
        for (int i = 0; i < gas.size(); ++i) {
            total += gas[i] - cost[i];
            if (total < 0) {
                total = 0;
                result = i + 1;
            }
        }

        return result;
    }
};
