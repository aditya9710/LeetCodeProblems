class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char min = letters.back();
        if (target >= min || target < letters[0]) return letters[0];
        
        const int length = letters.size();
        
        int left = 0;
        int right = length - 1;
        int mid;
        while (left + 1 < right) {
            mid = left + (right - left)/2;
            if (letters[mid] <= target) {
                left = mid;
            } 
            else {
                right = mid;
            }
        }
        return letters[right];
    }
};
