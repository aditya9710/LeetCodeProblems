#include <string>

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> Divisible;
        
        for (int i = 1; i <= n; i++) {
            if (i%3 == 0 && i%5 ==0)
                Divisible.push_back("FizzBuzz");
            else if (i%3 == 0)
                Divisible.push_back("Fizz");
            else if (i%5 == 0)
                Divisible.push_back("Buzz");
            else
                Divisible.push_back(to_string(i));
        }
        return Divisible;
    }
};