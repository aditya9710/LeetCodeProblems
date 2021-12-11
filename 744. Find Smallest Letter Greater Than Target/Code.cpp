class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char min = letters.back();
        if (target >= min) return letters[0];
        for(auto i: letters) {
            if (i > target && i < min){
                min = i;
                cout<<i;
            }
        }
        return min;
    }
};
