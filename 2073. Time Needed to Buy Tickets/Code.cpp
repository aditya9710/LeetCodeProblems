class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int count = 0;
        for(int i = 0; tickets[k] != 0; i++) {
            if (i == n) i = 0;
            if (tickets[i] == 0) continue;
            if (tickets[k] == 0) break;
            tickets[i] -= 1;
            count += 1;
        }
        return count;
    }
};
