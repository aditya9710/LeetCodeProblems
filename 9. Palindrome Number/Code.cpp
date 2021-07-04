class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        signed long n = 0;
        while(x > 0)
        {
            
            n = n*10 + x%10;
            x = x/10;
        }
        if(num == n)
            return true;
        else
            return false;
    }
};