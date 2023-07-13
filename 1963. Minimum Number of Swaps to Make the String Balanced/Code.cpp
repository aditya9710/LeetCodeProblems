class Solution {
public:
    int minSwaps(string s) {
        int extra_closing_count = 0;
        int max_closing_count = 0;
        for (char c : s) {
            if (c == '[') extra_closing_count--;
            else extra_closing_count++;
            max_closing_count = max(extra_closing_count, max_closing_count);
        }

        return (max_closing_count + 1)/2;
    }
};
