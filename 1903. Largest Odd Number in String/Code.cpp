#include <string> 
class Solution {
public:
    string largestOddNumber(string num) {
        int i = stoi(num), n = 0;
        if (i < 0) return "";
        if (i%2 != 0) return num;
        while(i>0){
            cout<<i%10<<' ';
            if ((i%10)%2 != 0 && (i%10) > n) {
                
                n = i%10;
            }
            i = i/10;
        }
        if (n == 0) return "";
        return to_string(n);
    }
};
